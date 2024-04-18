#include <iostream>
#include <string>

using namespace std;

void ReplaceSpaces(char* str,int maxlength)
{
	//1.先计算空格数、长度
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

	//2.计算添加空格后字符串的长度
	int SpacesLength = length + (SpacesSize * 2);

	//3.两个指针，指针p1指向原本字符串的尾部，p2指向替换字符串后的尾部，将p1给p2，

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
