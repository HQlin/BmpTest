BmpTest
===

MFC图片文件夹一层级遍历读取
---

* 编程语言
   * C++
* 图片格式
   * Halcon的HObject
* 使用说明 
   * CBmp* bmp = NULL;
   * CString* paths = new CString[3];
   * paths[0] = L"G:\\出差图像\\MCEQVIn2\\0\\";
   * paths[1] = L"G:\\出差图像\\MCEQVIn2\\1\\";
   * paths[2] = L"G:\\出差图像\\MCEQVIn2\\2\\";
   * //获取bmp对象
   * bmp = new CBmp(paths, 3);
   * bmp->GetPic(0);
   * bmp->m_obj;
   * if(NULL != bmp)
   * 	delete bmp;    
   