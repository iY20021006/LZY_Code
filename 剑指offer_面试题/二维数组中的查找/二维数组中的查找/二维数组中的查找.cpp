#include <iostream>
#include <cassert>
using namespace std;



bool find_val(int a[4][4], int row, int col, int val)
{
	assert(a);
	//���� row =4,col=4
	int rows = 0;
	col -= 1;
	while (col > 0 && rows < row)
	{
		//������ĵ�һ�����һ�п�ʼ��

		//��һ�����һ�е�������val ˵����һ�в���Ҫ������ ��--
		if (a[rows][col] > val)
			col--;

		//�����ұ߲���ҪѰ���ˣ���ʱ�����Ǹ�������ֵ����С��val��ֻ��˵��val�������У���������һ��Ѱ��
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