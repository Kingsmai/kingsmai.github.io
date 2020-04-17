/*
    Name: 循环实验5-1a 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-11 11:24:41 AM
    Description: 求1－1/2＋ 1/3 －1/4 －1/100的值。
    	此题用 for 循环 
*/
#include<stdio.h>
int main()
{
	int i,f=1;
	float sum;
	for (i=1;i<=100;i++)
	{
		sum=sum+(1/(float)i*f);
		f=-f;
	}
	printf("Sum= %f",sum);
	return 0;
}

