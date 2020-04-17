/*
    Name: 函数实验 9-4 
    Copyright:
    Author: Xiaomai
    Date: 2019/12/12 9:25:25
    Description: 编写程序比较局部auto变量和局部static变量的不同
*/
#include<stdio.h>
int funAuto(int x);		//函数声明 
int funStatic(int x);	//函数声明 
int main()
{
	int a=2,i;
	printf("Auto:\t");
	for(i=0;i<3;i++)	//进行三次运算 
		printf("%3d",funAuto(a));
	printf("\n");
	printf("Static:\t");
	for(i=0;i<3;i++)	//进行三次运算 
		printf("%3d",funStatic(a));
	return 0;
}
int funAuto(int x)		//Auto变量运算 
{
	auto int y=0;		//auto存储类型 
	y++;
	return (x*y);
}
int funStatic(int x)	//Static变量运算 
{
	static int y=0;		//static存储类型 
	y++;
	return (x*y);
}
