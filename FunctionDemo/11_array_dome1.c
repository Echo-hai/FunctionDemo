//#include<stdio.h>
//int order(int arr[], int len, int num);
//
//int main()
//{
///*
//��������Ļ�������/˳�����
//����˼·���������0������ʼ������������ң�����ҵ��ˣ������������Ӧ�����������û�У�����-1
//*/
////1.�������飺
//	int arr[] = { 45,87,4,8,55,2 };
//
//	//�����鳤�ȣ�
//	int len = sizeof(arr) / sizeof(int);
//
//	int num = 1;
//
//	//��������
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