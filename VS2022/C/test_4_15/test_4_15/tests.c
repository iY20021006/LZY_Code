#include <stdio.h>
#include <string.h>
//给字符串空格替换%20

//length 数组的总容量
void ReplaceBlank(char s[],size_t length)
{
	if (s == NULL && length <= 0)
		return;

	int i = 0;
	int n = 0;
	int line = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			n++;

		i++;
		line++;
	}

	int newlength = line+n*2;

	if (newlength > length)
		return;

	while (line >= 0 && newlength > line)
	{
		if (s[line] == ' ')
		{
			s[newlength--] = '0';
			s[newlength--] = '2';
			s[newlength--] = '%';

			line--;
		}
		else
		{
			s[newlength--] = s[line];
			line--;
		}
		
	}
}


int main()
{
	char str[20] = "hello world ";
	ReplaceBlank(str, 20);
	printf("%s", str);
	return 0;
}