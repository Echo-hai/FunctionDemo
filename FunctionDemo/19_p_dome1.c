//#include<stdio.h>
//
//void swap(void* p1, void* p2, int len);
//
//int main()
//{
//	//��ͬ���͵�ָ��֮�䣬�ǲ��ܻ��ำֵ��
//	//void���͵�ָ���������Ĺ���
//	//voidû���κ����ͣ��ô����Խ�����������ָ���¼���ڴ��ַ
//
//	//ȱ�㣺
//	//void���͵�ָ�룬�޷���ȡ������������ݣ�Ҳ���ܽ��мӣ������ļ���
//
//
//	//���ú���
//	short c = 100;
//	short d = 200;
//	
//
//	swap(&c, &d, 2);
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//
//
//
//	return 0;
//}
//
//void swap(void* p1, void* p2, int len)
//{
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//	for (int i=0;i<len;i++)
//	{
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//
//	}
//
//}