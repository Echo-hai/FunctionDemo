//#include<stdio.h>
//void getMaxAndMin(int arr[], int len, int* max, int* min);
//
//int main()
//{
//	//1.��������
//	int arr[] = { 1,2,3,4,5,8,5,9,1,10 };
//	int len = sizeof(arr) / sizeof(int);
//
//	int  max = arr[0];
//	int  min = arr[0];
//
//	getMaxAndMin(arr, len, &max, &min);
//	printf("���ֵΪ%d\n", max);
//	printf("��СֵΪ%d\n", min);
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[5]);
//	printf(" % d\n", arr[len-1]);
//
//	return 0;
//}
//
//
//
//
//void getMaxAndMin(int arr[], int len, int* max, int* min)
//{
//	//�����ֵ
//	*max = arr[0];
//	for (int i = 1;i < len;i++)
//	{
//		if (*max<arr[i])
//		{
//			*max = arr[i];
//		}
//	}
//
//	//����Сֵ
//	*min = arr[0];
//	for (int i = 1;i < len;i++)
//	{
//		if (*min > arr[i])
//		{
//			*min = arr[i];
//		}
//	}
//}