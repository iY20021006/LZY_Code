#include <iostream>
#include <string>

using namespace std;

void ReplaceSpaces(char* str,int maxlength)
{
	//1.�ȼ���ո���������
	int length = 0;
	int SpacesSize = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		length++;
		if (str[i] == ' ')
			SpacesSize++;

		i++;
	}

	//2.������ӿո���ַ����ĳ���
	int SpacesLength = length + (SpacesSize * 2);

	//3.����ָ�룬ָ��p1ָ��ԭ���ַ�����β����p2ָ���滻�ַ������β������p1��p2��

	while (length >= 0&& SpacesLength > length)
	{
		if (str[length] == ' ')
		{
			str[SpacesLength--] = '0';
			str[SpacesLength--] = '2';
			str[SpacesLength--] = '%';
		}
		else
		{
			str[SpacesLength--] = str[length];
		}
		length--;
	}
}


int main()
{
	char str[30] = " we are happy ";
	ReplaceSpaces(str, 30);
	cout << str << endl;
	return 0;
}
