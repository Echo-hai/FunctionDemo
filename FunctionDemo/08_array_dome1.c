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
//	//����10��1��100֮����������������
//
//	int arr_10[10] = { 0 };
//	int len = sizeof(arr_10) / sizeof(arr_10[0]);
//
//	srand(time(NULL));
//
//	//���������
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
//			printf("����Ϊ%d\n", arr_10[i]);
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
//	//��ƽ����
//	int avg = sum / len;
//	printf("%d\n", sum);
//	printf("ƽ����Ϊ%d\n", avg);
//
//	//ͳ���ж��ٸ����ֱ�ƽ������
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