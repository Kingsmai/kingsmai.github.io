/*
    Name: 循环实验4-2a
    Copyright:
    Author: Xiaomai
    Date: 2019-11-08 4:42:15 PM
    Description: 求1+1/3+1/5+....+1/99的和。
    	此题用 for 循环 
*/
#include<stdio.h>
int main()
{
	int i;
	float sum=0,div;
	for (i=1;i<=99;i=i+2)
	{
		div=1/(float)i;
		sum=sum+(1/(float)i);
		printf("1/%d\tSum=%f\n",i,div);
	}
	printf("\nSum=%f",sum);
	return 0;
}
