#include <stdio.h>
#include <stdbool.h>
//int fun(int a[])
//{
//	return sizeof(a);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr));
//
//	int* parr = arr;
//	printf("%d\n", sizeof(parr));
//
//	printf("%d\n", fun(arr));
//
//
//
//
//	return 0;
//}

bool find(int* a,int n,int szie,int rows,int lines)
{
	

	if (a == NULL)
		return false;

	int row = 0;
	int line = lines-1;
	//二维数组经过传参的过程降级为指针
	// 数组以下形式出现
	//1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15
	while (row < rows && line)
	{
		//一开始a[row * lines + line] 求第一行最后一列的数
		if (a[row * lines + line] == n)
			return true;
		else if (a[row * lines + line] > n)
			--line;
		else
			++row;
	}
	return false;


}


int main()
{

	int arr[4][4] = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	bool ret = find(arr, 7, sizeof(arr) / sizeof(int), 4, 4);

	printf("%d\n",ret);
	return 0;
}