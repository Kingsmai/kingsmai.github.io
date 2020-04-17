/*
    Name: 函数实验 8-1 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-03 1:25:24 PM
    Description: 通过函数调用的方式计算y=|x|
*/
#include<stdio.h>
int abs(int x);
int main()
{
	int x,y;
	printf("Please input value (x): ");
	scanf("%d",&x);
	y=abs(x);	//调用 abs 函数 
	printf("y=%d",y);
	return 0;
}
int abs(int x)	//abs 函数算法 
{
	if(x<0)
		return -x;
	else
		return x;
}
