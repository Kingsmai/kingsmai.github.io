/*
    Name: 函数实验 8-7 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 11:12:31 AM
    Description: 用递归法计算菲波那契数列（Fibonacci序列）的前20项。
*/
#include<stdio.h>
int fibo(int n);	//声明斐波那契序列函数 
int main()
{
	int i;
	for(i=1;i<=20;i++)	//循环使 i=1~20 
		printf("%5d",fibo(i));
	return 0;
}
int fibo(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);	//递归调用 
}
