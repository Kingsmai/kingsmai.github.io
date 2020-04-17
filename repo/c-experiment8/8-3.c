/*
    Name: 函数实验 8-3 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-03 2:33:32 PM
    Description: 编写一个函数，
		计算任一输入的整数的各位数字之和。
		其中，主函数包括输入、输出和调用该函数
*/
#include<stdio.h>
int fun(int n);		//函数声明 
int main()			//主函数 
{
	int n;
	scanf("%d",&n);	//输入参数 
	printf("%d\n",fun(n));	//调用fun函数 
	return 0;
}
int fun(int n)		//fun函数定义 
{
	int s=0;
	while(n)		//当 n 值非 0 
	{
		s+=n%10;	//取个位数 
		n=n/10;		//n 小一位 
	}
	return s;		//返回值 s 
}
