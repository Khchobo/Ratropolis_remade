#pragma once
#include "Obj.h"
class CFactory :
	public CObj
{
public:
	explicit CFactory();
	virtual ~CFactory();

	// CObj��(��) ���� ��ӵ�
	virtual HRESULT Initialize() override;
	virtual int Update() override;
	virtual void Late_Update() override;
	virtual void Render() override;
	virtual void Release() override;
};

