#pragma once
class CGraphic_Device;
class CGameMenu

#define BUTTONNUMBER 3
{
public:
	CGameMenu();
	~CGameMenu();
	
public:
	void Create() { m_Execution = true; Game_Progress = true; }
	

public:
	void Render_Window();
	void Render_Button();

public:
	void Initialize();
	void Update();
	void Render();
	void Release();

private:
	CGraphic_Device* m_pDevice;
	//0. �����ư 1.�ݱ��ư 2.���θ޴�
	D3DXVECTOR3 m_vButtonPos[BUTTONNUMBER];
	RECT	m_rButton[BUTTONNUMBER];
	bool m_ButtonCkeck[BUTTONNUMBER];
	bool m_Execution;
};

