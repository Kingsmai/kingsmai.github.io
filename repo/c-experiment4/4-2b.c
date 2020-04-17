/*
    Name: 循环实验4-2b
    Copyright:
    Author: Xiaomai
    Date: 2019-11-08 5:25:23 PM
    Description: 求1+1/3+1/5+....+1/99的和。
    	此题用 while 循环 
*/
#include<stdio.h>
int main()
{
	int i=1;
	float sum=0;
	while (i<=99)
	{
		sum=sum+(1/(float)i);
		i=i+2;
	}
	printf("Sum=%f",sum);
	return 0;
}
