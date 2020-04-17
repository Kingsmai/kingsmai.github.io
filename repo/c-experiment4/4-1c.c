/*
    Name:循环实验4-1c
    Copyright:
    Author: Xiaomai
    Date: 2019-11-07 7:41:20 PM
    Description:求3+6+9+...+99的和。
    	此题用 do-while 循环 
*/

#include<stdio.h>
int main()
{
	int i=1,sum=0;
	do
	{
		sum+=i*3;
		i=i+1;
	}
	while(i<=99/3);
	printf("Sum=%d",sum);
	return 0;
}
