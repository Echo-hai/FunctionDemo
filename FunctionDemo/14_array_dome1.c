//#include<stdio.h>
//
//void arr_though(int arr[], int len);
//
//int main()
//{
///*
//ð������
//1.���ڵ�Ԫ�������Ƚϣ���ķ��ұߣ�С�ķ����
//2.��һ�ֱȽ���֮�����ֵ�Ѿ�ȷ�ϣ��ڶ��ֿ�����ѭ��һ�Σ�����һ�����ơ�
//3.�����������n�����ݣ��ܹ�ִ��n-1�δ���
//����
//����ð�������������ݰ��մ�С�����˳���������
//3,5,2,4,8,1,9,5,26
//*/
////1.��������
//	int arr[] = { 3,5,2,4,8,1,9,7,26,6 };
//
////2.�����鳤��
//	int len = sizeof(arr) / sizeof(int);
//	
//
//	arr_though(arr, len);
//	printf(" \n");
//
//
////3.��ʼð������
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
//	//ѡ������
//	//1.��������
//	int arr1[] = { 3,5,2,4,8,1,9,7,26,6 };
//
//	//2.�����鳤��
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
////����������Զ��庯��
//void arr_though(int arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//
//}