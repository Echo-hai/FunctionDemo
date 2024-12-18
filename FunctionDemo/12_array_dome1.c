//#include<stdio.h>
//int binarySearch(int arr[], int len, int num);
//
//
//int main()
//{
///*
//需求：数组的二分查找
//在7，23，79，81，103，127，131，149中查找数据
//*/
//	//1.定义数据
//	int arr[] = { 7,23,79,81,103,127,131,149 };
//
//	//2.求数组长度
//	int len = sizeof(arr) / sizeof(int);
//	int num = 131;
//
//	//3.调用函数，进行查找
//
//	int dex = binarySearch(arr, len, num);
//
//	//4.打印输出
//	printf("%d\n", dex);
//
//	return 0;
//}
//
////函数功能：用二分法查找数据
////返回值：数据在数组中的索引
////找到了，真是的索引
////没找到，返回-1
//
//int binarySearch(int arr[], int len, int num)
//{
//	int max = len - 1;
//	int min = 0;
//	
//	while (min < max)
//	{
//		int mid = (max + min) / 2;
//		if (arr[mid] > num)
//		{
//			min = min;
//			max = mid - 1;
//		}
//		if (arr[mid] < num)
//		{
//			min = mid + 1;
//			max = max;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}