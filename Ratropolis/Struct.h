#pragma once
typedef struct tagTexInfo
{
	LPDIRECT3DTEXTURE9	pTexture;
	D3DXIMAGE_INFO		tImageInfo;
}TEXINFO;

typedef struct tagFrame
{
	float fStartFrame;
	float fMaxFrame;
}FRAME;

typedef struct tagTile
{
	D3DXVECTOR3 vPos;
	D3DXVECTOR3 vSize; 
	BYTE byDrawID;
	//0 �Ǽ� ���� 1 �Ǽ� �Ұ���
	BYTE byOption;
}TILE;

typedef struct tagPathInfo
{
	wstring wstrPath;
	wstring wstrObjectKey;
	wstring wstrStateKey;
	DWORD	dwCount;
}PATHINFO;

typedef	struct tagInfo
{
	D3DXVECTOR3 vPos;
	D3DXVECTOR3 vDir;
	D3DXVECTOR3 vSize;
	D3DXMATRIX	matWorld;

	float m_fAngle;
	float m_fSpeed;
}INFO;

typedef struct tagCradInfo
{
	wstring m_wstrName;			//�̸�(ã������ ����)
	int		m_iPopulation;		//�α���(�ǹ� ������� ���� ��)
	int		m_iAtt;	
	int		m_iHp;
	int		m_iGold;
	int		m_iRange;
	int		m_iImageNumber;		//�̹��� ����
	DWORD	m_dwType;			//ī�� ����(0. ���� 1.���� 2.�ǹ� 3.���)
}CRADINFO;

typedef struct tagFont
{
	TCHAR	m_szBuffer[16];
	bool	m_bCheck;
	RECT	m_rSize;
}FONT;

typedef struct tagSatge
{
	int m_iGold;
	int m_iTex;
	int m_iPop;
	int m_iMaxPop;
	int m_iWave;
	int m_iMaxWave;
	int m_iReSetTime;
	int m_iTexTime;
}STAGEINFO;


typedef struct tagSoundInfo
{
	char chunkId[4];
	unsigned long chunkSize;
	char format[4];
	char subChunKID[4];
	unsigned long subChunkSize;
	unsigned short audioFormat;
	unsigned short numChannels;
	unsigned long sampleRate;
	unsigned long bytesPerSecond;
	unsigned short blockAlign;
	unsigned short bitsPerSample;
	char dataChunkID[4];
	unsigned long dataSize;
}SOUNDINFO;