//#include<stdio.h>
//int binarySearch(int arr[], int len, int num);
//
//
//int main()
//{
///*
//��������Ķ��ֲ���
//��7��23��79��81��103��127��131��149�в�������
//*/
//	//1.��������
//	int arr[] = { 7,23,79,81,103,127,131,149 };
//
//	//2.�����鳤��
//	int len = sizeof(arr) / sizeof(int);
//	int num = 131;
//
//	//3.���ú��������в���
//
//	int dex = binarySearch(arr, len, num);
//
//	//4.��ӡ���
//	printf("%d\n", dex);
//
//	return 0;
//}
//
////�������ܣ��ö��ַ���������
////����ֵ�������������е�����
////�ҵ��ˣ����ǵ�����
////û�ҵ�������-1
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