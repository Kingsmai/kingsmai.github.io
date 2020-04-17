/*
	Name	: 指针实验 10-2 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/20 14:28:17
	Description: 输入3个整数，按照由大到小的顺序输出，并要求用指针进行操作
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
int main()
{
	int a,b,c,x;	//定义变量，x为临时变量 
	int *pa,*pb,*pc;//定义指针 
	pa=&a;	//指针初始化 
	pb=&b;
	pc=&c;
	printf("Please input 3 interger (a b c): ");
	scanf("%d%d%d",pa,pb,pc);
	if(*pa>*pb)
	{
		x=*pa;
		*pa=*pb;
		*pb=x;
	}
	if(*pa>*pc)
	{
		x=*pa;
		*pa=*pc;
		*pc=x;
	}
	if(*pb>*pc)
	{
		x=*pb;
		*pb=*pc;
		*pc=x;
	}
	printf("After Arrange: %d,%d,%d",*pa,*pb,*pc);
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

