//#include<stdio.h>
//int getReminder(int num1, int num2, int* res);
//
//int main()
//{
//
//	int a = 10;
//	int b = 5;
//	int res = 0;
//
//	int flag = getReminder(a, b, &res);
//	if (!flag)
//	{
//		printf("%d\n", res);
//	}
//
//	return 0;
//}
//
////����ֵ����ʾ�����״̬0��������1��������
//
//int getReminder(int num1, int num2, int* res)
//{
//	if (num2 == 0)
//	{
//		return 1;
//	}
//	*res = num1 % num2;
//	return 0;
//}