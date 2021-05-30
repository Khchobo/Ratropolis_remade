#pragma once
#include "Obj.h"
class CArrow :
	public CObj
{
public:
	explicit CArrow();
	virtual ~CArrow();
public:
	enum DIR
	{
		LEFT, RIGHT, END
	};


public:
	virtual HRESULT Initialize() override;
	virtual int Update() override;
	virtual void Late_Update() override;
	virtual void Render() override;
	virtual void Release() override;
	
public:
	void Parabola();
	void Move();
	bool Attack();
	

public:
	const void Set_Target(CObj* vTarget) { m_pTarget = vTarget; }
	const void Set_Damage(int iDamage) { m_iDamage = iDamage; }

private:
	D3DXVECTOR3 m_vStartPos;
	CObj*	m_pTarget;
	bool	m_bDelete_Target;
	int		m_iDamage;
	float	m_fSpeedX;
	float	m_fSpeedY;
	DIR		m_eDir;

	float m_fFG; //�߷°��ӵ�
	float m_fEndTime; //�������� ���޽ð�
	float m_fMaxHeight; //�ִ����
	float m_fHeight;	// �ִ���� - ���۳���
	float m_fEndHeight; //������ ����
	float m_fTime; //���� �ð�
	float m_fMaxTime; //�ִ���̱��� ���� �ð�
};