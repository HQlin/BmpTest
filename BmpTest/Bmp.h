// Bmp.h : ��ȡbmpͼƬͷ�ļ�
//

#pragma once

#include<vector>
#include "HalconCpp.h"

using namespace std;
using namespace HalconCpp;

class CBmp
{
public:
	CBmp(CString* dir, int length);
	~CBmp(void);

	//��Ա����
	HObject m_obj;											//����Halcon HObject

	//��Ա����
	void GetPic(int type);									//��ȡͼƬ
	void TraverseDir(CString& dir, vector<CString>& vec);	//��ȡ�ļ�������·��
	void SetTypeIndex(int type, int i);						//ָ���ļ������ʾ

	vector<CString> *paths;									//�洢�ļ�������ͼƬ·��
	int             *index;									//ͼƬ·����ʶ
};

