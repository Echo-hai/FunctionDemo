//#include<stdio.h>
//int sum(int num1, int num2);
//int abc(int moon1, int moon2, int moon3);
//int getArea(double r);
//
//int main()
//{
//	int a;
//	int b;
//	a=sum(93, 10);
//	b= sum(87, 9);
//	int quarter1;
//	int quarter2;
//	int quarter3;
//	int quarter4;
//
//	//ÿ�����ȵ�Ӫҵ��
//	quarter1 = abc(10, 20, 15);
//	quarter2 = abc(20, 30, 17);
//	quarter3 = abc(19, 17, 20);
//	quarter4= abc(23, 21, 19);
//
//	printf("����\tӪҵ��\t\n");
//	printf("1\t%d\t\n", quarter1);
//	printf("2\t%d\t\n", quarter2);
//	printf("3\t%d\t\n", quarter3);
//	printf("4\t%d\t\n", quarter4);
//
//	if (quarter1 > quarter2 && quarter1 > quarter3 && quarter1 > quarter4)
//	{
//		printf("��һ����Ӫҵ�����Ϊ%d\n", quarter1);
//	}
//	else if (quarter2 > quarter1 && quarter2 > quarter3 && quarter2 > quarter4)
//	{
//		printf("�ڶ�����Ӫҵ�����Ϊ%d\n", quarter2);
//	}
//	else if (quarter3 > quarter1 && quarter3 > quarter2 && quarter3> quarter4)
//	{
//		printf("��������Ӫҵ�����Ϊ%d\n", quarter3);
//	}
//	else
//	{
//		printf("���ļ���Ӫҵ�����Ϊ%d\n", quarter4);
//	}
//
//	//�ȽϷ�����С
//	if (a > b)
//	{
//		printf("С�ۻ۵��ָܷ���\n");
//	}
//	else if (a == b)
//	{
//		printf("С�������ָܷ���\n");
//	}
//	else
//	{
//		printf("һ����\n");
//	}
//
//	//��Բ��������Ƚϴ�С
//
//	double area1 = getArea(6.3);
//	double area2 = getArea(5.2);
//
//	if (area1 > area2)
//	{
//		printf("��һ��Բ���������\n");
//
//	}
//	else if (area1 < area2)
//	{
//		printf("�ڶ���Բ���������\n");
//	}
//	else
//	{
//		printf("����Բ�����һ����\n");
//	}
//	
//
//	return 0;
//}
//
//int sum(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int abc(int moon1, int moon2, int moon3)
//{
//	int turnover = moon1 + moon2 + moon3;
//	return turnover;
//}
//
//int getArea(double r)
//{
//	double Area_c = 3.14 * r * r;
//
//	return Area_c;
//}
