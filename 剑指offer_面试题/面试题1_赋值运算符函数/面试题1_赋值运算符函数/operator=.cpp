#include <iostream>

using namespace std;

class CMyString
{
public:
	CMyString(char* pData = nullptr)
		:m_pData(pData)
	{}


	CMyString(const CMyString& str)
		:m_pData(str.m_pData)
	{}



	//��ֵ���������
	
	//����1��������ڴ治��new�����쳣
	//CMyString& operator=(const CMyString& str)
	//{
	//	//��������ֱͬ�ӷ���
	//	if (this == &str)
	//		return *this;

	//	//����ͬ�Ȱ�m_pData�ͷ��ƿգ��ڿ��ٿռ��m_pData
	//	delete[] m_pData;
	//	m_pData = nullptr;
	//	m_pData = new char[strlen(str.m_pData) + 1];
	//	//��str������m_pData��
	//	strcpy(m_pData,str.m_pData);
	//	return *this;
	//}

	//����2���ȴ���һ����ʱʵ��strtemp������ȡ����str��ֵ�����Ű�strtemp��m_pData���н���
	CMyString& operator=(const CMyString& str)
	{
		if (this != &str)
		{
			CMyString strtemp(str);

			char* temp = strtemp.m_pData;
			strtemp.m_pData = m_pData;
			m_pData = temp;

		}
		return *this;
	}


	~CMyString(void) {}

private:
	char* m_pData;
};


int main()
{
	char p[] = "hello";
	CMyString c1(p);
	CMyString c2; CMyString c3;
	c3 =c2 = c1;

	return 0;

}