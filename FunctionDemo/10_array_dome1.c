//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void through_arr(int arr_1[], int len);
//
//int main()
//{
//	//需求：定义一个数组，存入1~5。要求打乱数组中所有数据顺序
////1.定义数组
//	int arr[] = { 1,2,3,4,5 };
//
////2.求数组长度
//	int len = sizeof(arr) / sizeof(int);
//
////3.设置种子
//	srand(time(NULL));
//
////4.定义随机数
//
//	for (int i = 0;i < 5;i++)
//	{
//		int def = rand() % len;	//设置0-4之间的任意随机数】
//		int temp = arr[i];
//		arr[i] = arr[def];
//		arr[def] = temp;
//	}
//
//	//遍历数组
//	through_arr(arr, len);
//
//	return;
//}
//
//void through_arr(int arr_1[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d\n",  arr_1[i]);
//	}
//}