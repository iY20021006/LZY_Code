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



	//赋值运算符重载
	
	//方法1、会存在内存不足new会抛异常
	//CMyString& operator=(const CMyString& str)
	//{
	//	//若两个相同直接返回
	//	if (this == &str)
	//		return *this;

	//	//若不同先把m_pData释放制空，在开辟空间给m_pData
	//	delete[] m_pData;
	//	m_pData = nullptr;
	//	m_pData = new char[strlen(str.m_pData) + 1];
	//	//将str拷贝到m_pData中
	//	strcpy(m_pData,str.m_pData);
	//	return *this;
	//}

	//方法2、先创建一个临时实例strtemp，来获取参数str的值，接着把strtemp与m_pData进行交换
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