//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void through_arr(int arr_1[], int len);
//
//int main()
//{
//	//���󣺶���һ�����飬����1~5��Ҫ�������������������˳��
////1.��������
//	int arr[] = { 1,2,3,4,5 };
//
////2.�����鳤��
//	int len = sizeof(arr) / sizeof(int);
//
////3.��������
//	srand(time(NULL));
//
////4.���������
//
//	for (int i = 0;i < 5;i++)
//	{
//		int def = rand() % len;	//����0-4֮��������������
//		int temp = arr[i];
//		arr[i] = arr[def];
//		arr[def] = temp;
//	}
//
//	//��������
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