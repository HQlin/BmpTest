// Bmp.h : 获取bmp图片头文件
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

	//成员变量
	HObject m_obj;											//创建Halcon HObject

	//成员函数
	void GetPic(int type);									//获取图片
	void TraverseDir(CString& dir, vector<CString>& vec);	//获取文件夹所有路径
	void SetTypeIndex(int type, int i);						//指定文件夹与标示

	vector<CString> *paths;									//存储文件夹所有图片路径
	int             *index;									//图片路径标识
};

