//#include<stdio.h>
//#include<stdlib.h>
//void through_arr(int arr_1[], int len);
//
//int main()
//{
//	//键盘录入五个数据并存入数组，完成以下
//	//1.遍历数组
//	//2.反转数组
//	//3.再次遍历
//
//	//定义数组
//	int arr_1[5] = { 0 };
//
//	//求数组长度
//	int len = sizeof(arr_1) / sizeof(arr_1[0]);
//
//	//键盘输入
//	for (int i = 0;i < len;i++)
//	{
//		printf("请输入第%d个数组\n", i + 1);
//		scanf("%d", &arr_1[i]);
//		arr_1[i] = arr_1[i];
//	}
//
//	//遍历数组
//	through_arr(arr_1, len);
//
//	//反转数组
//	int i = 0;
//	int j = len-1;
//	int temp = 0;
//	while (i < j)
//	{
//		temp=arr_1[i];
//		arr_1[i] = arr_1[j];
//		arr_1[j] = temp;
//		i++;
//		j--;
//	}
//
//	//遍历数组
//
//	through_arr(arr_1, len);
//
//	return 0;
//}
//
//void through_arr(int arr_1[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("第%d个数组为%d：\n", i+1,arr_1[i]);
//	}
//}