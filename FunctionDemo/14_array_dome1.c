//#include<stdio.h>
//
//void arr_though(int arr[], int len);
//
//int main()
//{
///*
//冒泡排序
//1.相邻的元素两两比较，大的放右边，小的放左边
//2.第一轮比较完之后，最大值已经确认，第二轮可以少循环一次，后面一次类推。
//3.如果数组中有n个数据，总共执行n-1次代码
//需求：
//利用冒泡排序将下列数据按照从小到大的顺序进行排序
//3,5,2,4,8,1,9,5,26
//*/
////1.定义数组
//	int arr[] = { 3,5,2,4,8,1,9,7,26,6 };
//
////2.求数组长度
//	int len = sizeof(arr) / sizeof(int);
//	
//
//	arr_though(arr, len);
//	printf(" \n");
//
//
////3.开始冒泡排序
//	for (int i=0;i<len-1;i++)
//	{
//		for (int j = 0;j < len - 1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	arr_though(arr, len);
//	printf(" \n");
//
//	//选择排序
//	//1.定义数组
//	int arr1[] = { 3,5,2,4,8,1,9,7,26,6 };
//
//	//2.求数组长度
//	int len1 = sizeof(arr) / sizeof(int);
//	for (int i=0;i<len-1;i++)
//	{
//		for (int j = i+1;j < len1;j++)
//		{
//
//			if (arr1[i] > arr1[j])
//			{
//				int temp1 = arr1[i];
//				arr1[i] = arr1[j];
//				arr1[j] = temp1;
//			}
//		}
//	}
//	arr_though(arr1, len1);
//
//
//
//	return 0;
//}
//
////遍历数组的自定义函数
//void arr_though(int arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//
//}