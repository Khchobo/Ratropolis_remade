#include "stdafx.h"
#include "Graphic_Device.h"
#include "TextureMgr.h"
#include "Ui.h"
#include "ScrollMgr.h"


CUi::CUi()
{
	m_pDevice = CGraphic_Device::Get_Instance();
}


CUi::~CUi()
{
	Release();
}

HRESULT CUi::Initialize()
{
	return S_OK;
}

int CUi::Update()
{
	return OBJ::LIVE;
}
void CUi::Late_Update()
{
}

void CUi::Render()
{
	const TEXINFO* pTexInfo = CTextureMgr::Get_Instance()->Get_TexInfo(m_wstrObjectKey, m_wstrStateKey, m_dwCount);
	if (!pTexInfo)
		return;
	D3DXMATRIX	matScale, matTrans;
	float fCenterX = float(pTexInfo->tImageInfo.Width >> 1);
	float fCenterY = float(pTexInfo->tImageInfo.Height >> 1);
	
	D3DXMatrixScaling(&matScale, m_tInfo.vSize.x, m_tInfo.vSize.y, 0.f);
	D3DXMatrixTranslation(&matTrans, m_tInfo.vPos.x , m_tInfo.vPos.y, 0.f);

	m_tInfo.matWorld = matScale * matTrans;

	m_pDevice->Get_Sprite()->SetTransform(&m_tInfo.matWorld);
	m_pDevice->Get_Sprite()->Draw(pTexInfo->pTexture, nullptr, &D3DXVECTOR3(fCenterX, fCenterY, 0.f), nullptr, D3DCOLOR_ARGB(255, 255, 255, 255));

}

void CUi::Release()
{
}

