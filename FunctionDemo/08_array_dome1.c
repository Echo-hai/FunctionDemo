//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int contain(int arr_10[], int len, int num);
//
//int main()
//{
//	/*int arr[] = {33,5,22,44,55,54,85,48,4};
//	int max = arr[0];
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < len;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);*/
//
//	//生成10个1到100之间的随机数存入数组
//
//	int arr_10[10] = { 0 };
//	int len = sizeof(arr_10) / sizeof(arr_10[0]);
//
//	srand(time(NULL));
//
//	//生成随机数
//
//	for (int i = 0;i < len;)
//	{
//		int num = rand() % 100 + 1;
//		int flag = contain(arr_10, len, num);
//		if (!flag)
//		{
//			arr_10[i] = num;
//			i++;
//		}
//	}
//		for (int i = 0;i < len;i++)
//		{
//			printf("数组为%d\n", arr_10[i]);
//		}
//		
//	
//	int sum = 0;
//	for (int i=0;i<len;i++)
//	{
//		
//		sum = sum + arr_10[i];
//	}
//
//	//求平均数
//	int avg = sum / len;
//	printf("%d\n", sum);
//	printf("平均数为%d\n", avg);
//
//	//统计有多少个数字比平均数少
//
//	int count = 0;
//	for (int i = 0;i < len;i++)
//	{
//		if (arr_10[i] < avg)
//		{
//			count++;
//		}
//	}
//	printf("-----------------------\n");
//	printf("%d\n", count);
//	return 0;
//}
//
//
//
//
//
//
//int contain(int arr_10[], int len, int num)
//{
//
//	for (int i = 0;i < len;i++)
//	{
//
//		if (arr_10[i] == num)
//		{
//			return 1;
//		}
//		
//	}
//	return 0;
//}