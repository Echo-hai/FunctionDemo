#include<stdio.h>
int main()
{
	/*
	二维数组
	定义格式方式1：
	m表示二维数组的长度
	n:表示每一个一维数组的长度
	数据类型 arr[m][n]=
	{
		{1,23,4,5,6},
		{1,2,3,4,5,},
		{1,2,3,4,5}
	}
	遍历：利用索引进行遍历/利用指针进行遍历
	*/
	//定义一个二维数组
	int arr[3][5] =
	{
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555}
	};

	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("%d ", arr[i][j]);
		}
	}

	return 0;
}