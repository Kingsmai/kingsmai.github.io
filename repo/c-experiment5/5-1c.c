/*
    Name: 循环实验5-1c
    Copyright:
    Author: Xiaomai
    Date: 2019-11-11 11:47:38 AM
    Description: 求1－1/2＋ 1/3 －1/4 －1/100的值。
    	此题用 do-while 循环 
*/
#include<stdio.h>
int main()
{
	int i=1,f=1;
	float sum;
	do
	{
		sum=sum+1/(float)i*f;
		f=-f;
		i=i+1;
	}
	while(i<=100);
	printf("Sum= %f",sum);
	return 0;
}

