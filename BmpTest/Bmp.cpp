// Bmp.cpp : 获取bmp图片实现类
//

#include "stdAfx.h"
#include "Bmp.h"

CBmp::CBmp(CString* dir, int length)
	: index(new int[length]),
	paths(new vector<CString>[length])
{
	for(int i=0;i<length; i++)
	{
		paths[i].clear();
		//获取文件夹下所有文件路径paths
		TraverseDir(dir[i], paths[i]);
		index[i] = 0;
	}	
	delete []dir;
}


CBmp::~CBmp(void)
{
	delete []paths;
	delete index;
}

void CBmp::GetPic(int type)
{
	//最后一张图片提示
	if(index[type] == paths[type].size())
	{
		index[type] = 0;
		//MessageBox会暂时终止程序执行
		//MessageBox(NULL,_T("最后一张图片,重新开始"),_T("提示"),MB_OK);
	}

	//HObject
	DeleteObject(&m_obj);
	USES_CONVERSION;
	ReadImage(&m_obj, W2A(paths[type][index[type]])); 

	index[type]++;
}

void CBmp::TraverseDir(CString& dir, vector<CString>& vec)
{
    CFileFind ff;
    if (dir.Right(1) != "/")
        dir += "/";
    dir += "*.*";
     
    BOOL ret = ff.FindFile(dir);
    while (ret)
    {
        ret = ff.FindNextFile();
        if (ff.IsDirectory() && !ff.IsDots())
        {
			CString path = ff.GetFilePath();
			TraverseDir(path, vec);
		}
		else if (!ff.IsDirectory() && !ff.IsDots())
		{
			CString name = ff.GetFileName();
			CString path = ff.GetFilePath();
			vec.push_back(path);
		}
    }
	ff.Close();
}

void CBmp::SetTypeIndex(int type, int i)
{
	index[type] = i;
}

