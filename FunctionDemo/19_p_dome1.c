//#include<stdio.h>
//
//void swap(void* p1, void* p2, int len);
//
//int main()
//{
//	//不同类型的指针之间，是不能互相赋值的
//	//void类型的指针打破上面的观念
//	//void没有任何类型，好处可以接受任意类型指针记录的内存地址
//
//	//缺点：
//	//void类型的指针，无法获取变量里面的数据，也不能进行加，减法的计算
//
//
//	//调用函数
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