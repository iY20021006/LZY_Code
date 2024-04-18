#include <iostream>
#include <cassert>
using namespace std;



bool find_val(int a[4][4], int row, int col, int val)
{
	assert(a);
	//参数 row =4,col=4
	int rows = 0;
	col -= 1;
	while (col > 0 && rows < row)
	{
		//从数组的第一行最后一列开始找

		//第一行最后一列的数大于val 说明这一列不需要在找了 列--
		if (a[rows][col] > val)
			col--;

		//由于右边不需要寻找了，此时的数是该行最大的值，若小于val，只能说明val不在这行，继续往下一行寻找
		else if (a[rows][col] < val)
			rows++;

		else if (a[rows][col] == val)
			return true;
	}
	return false;
}

int main()
{
	int arr[4][4] = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };

	cout<<find_val(arr,4,4,17)<<endl;
		
	return 0;
}