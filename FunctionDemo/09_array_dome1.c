//#include<stdio.h>
//#include<stdlib.h>
//void through_arr(int arr_1[], int len);
//
//int main()
//{
//	//����¼��������ݲ��������飬�������
//	//1.��������
//	//2.��ת����
//	//3.�ٴα���
//
//	//��������
//	int arr_1[5] = { 0 };
//
//	//�����鳤��
//	int len = sizeof(arr_1) / sizeof(arr_1[0]);
//
//	//��������
//	for (int i = 0;i < len;i++)
//	{
//		printf("�������%d������\n", i + 1);
//		scanf("%d", &arr_1[i]);
//		arr_1[i] = arr_1[i];
//	}
//
//	//��������
//	through_arr(arr_1, len);
//
//	//��ת����
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
//	//��������
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
//		printf("��%d������Ϊ%d��\n", i+1,arr_1[i]);
//	}
//}