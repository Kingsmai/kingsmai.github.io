/*
    Name: 函数实验 8-2 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-03 1:57:57 PM
    Description: 在主函数中输入一个整数
		在子函数中判定该数据的奇偶性后
		将判定结果在主函数中输出
*/
#include<stdio.h>
int even(int y);
int main()
{
	int x,y=0;
	printf("Please input a interger number: ");
	scanf("%d",&x);
	if (even(x)==0)	//如果函数返回值为 0 
		printf("odd");	//奇数 
	else
		printf("even");	//偶数 
	return 0;
}
int even(int y)
{
	if (y%2==0)	//当余数为 0 
		return 1;
	else
		return 0;
}
