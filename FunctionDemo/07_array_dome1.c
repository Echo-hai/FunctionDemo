//#include<stdio.h>
//void printArr(int arr[], int len);
//
//int main()
//{
//	//数组的定义：
//	//数据类型  数组名【长度】；
//	//索引就是数组的一个编号，也叫做：角标，下标，标号
//
//	int arr1[80];
//
//	//2.定义数组存储全班50位同学的身高
//
//	double arr2[50];
//
//	//3。定义数组存储全身每件衣服的价格
//	double arr3[3];
//
//	//4.定义数组存储5个学生的年龄，并初始化
//	int arr_age[5] = { 17,18,19,20,21 };
//
//	//5.定义数组存储你女朋友的身高，并初始化
//	
//	double arr_Gfriens[] = {1.68,1.53};
//
//	int arr5[5] = { 1,2,3,4,5 };
//	printf("%d\n", arr5[0]);
//	printf("%d\n", arr5[1]);
//	printf("%d\n", arr5[2]);
//	printf("%d\n", arr5[3]);
//	printf("%d\n", arr5[4]);
//	//利用循环遍历数组
//	//int len=长度
//	for (int i=0;i<5;i++)
//	{
//		printf("%d\n", arr5[i]);
//	}
//
//	printf("%p\n", &arr5[0]);
//	printf("%p\n", &arr5[1]);
//	printf("%p\n", &arr5[3]);
//	printf("-------------------\n");
//
//	int a = 20;
//	printf("%p\n", &a);
//
//	//数组作为函数的参数，要注意什么？
//	//实际上传递的是数组的首地址，如果要在函数中对数组进行遍历的话，
//	// 记得一定要把数组的长度一起传递去过去
//	//函数中的arr：只是一个变量，用来记录数据的首地址
//
//	//1.定义数组
//	int arr_1 [] = { 1,2,5,4,1,5,12,5,4,2,5,2,4 };
//	//2.计算数组的长度
//
//	int len = sizeof(arr_1) / sizeof(arr_1[0]);
//
//	//调用函数遍历数组
//
//	printArr(arr_1, len);
//
//	return 0;
//}
//
//void printArr(int arr[],int len)
//{
//	for (int i=0;i<len;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//}