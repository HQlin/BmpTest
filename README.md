BmpTest
===

MFCͼƬ�ļ���һ�㼶������ȡ
---

* �������
   * C++
* ͼƬ��ʽ
   * Halcon��HObject
* ʹ��˵�� 
   * CBmp* bmp = NULL;
   * CString* paths = new CString[3];
   * paths[0] = L"G:\\����ͼ��\\MCEQVIn2\\0\\";
   * paths[1] = L"G:\\����ͼ��\\MCEQVIn2\\1\\";
   * paths[2] = L"G:\\����ͼ��\\MCEQVIn2\\2\\";
   * //��ȡbmp����
   * bmp = new CBmp(paths, 3);
   * bmp->GetPic(0);
   * bmp->m_obj;
   * if(NULL != bmp)
   * 	delete bmp;    
   