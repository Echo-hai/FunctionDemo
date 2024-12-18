//#include<stdio.h>
//int order(int arr[], int len, int num);
//
//int main()
//{
///*
//需求：数组的基本查找/顺序查找
//核心思路：从数组的0索引开始，依次往后查找，如果找到了，返回数据相对应的索引，如果没有，返回-1
//*/
////1.定义数组：
//	int arr[] = { 45,87,4,8,55,2 };
//
//	//求数组长度：
//	int len = sizeof(arr) / sizeof(int);
//
//	int num = 1;
//
//	//返回索引
//	int a = order(arr, len, num);
//
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int order(int arr[], int len, int num)
//{
//	for(int i=0;i < len-1;i++)
//	{
//		if (arr[i]==num)
//		{
//			return i;
//		}
//	}
//	return -1;
//}