#pragma once
#include "Obj.h"
class CHouse :
	public CObj
{
public:
	explicit CHouse();
	virtual ~CHouse();

	// CObj��(��) ���� ��ӵ�
	virtual HRESULT Initialize() override;
	virtual int Update() override;
	virtual void Late_Update() override;
	virtual void Render() override;
	virtual void Release() override;
};

