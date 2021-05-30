#pragma once
#include "Obj.h"
class CBarn :
	public CObj
{
public:
	explicit CBarn();
	virtual ~CBarn();

	// CObj��(��) ���� ��ӵ�
	virtual HRESULT Initialize() override;
	virtual int Update() override;
	virtual void Late_Update() override;
	virtual void Render() override;
	virtual void Release() override;

private:
	int m_iCrad_Number;
};

