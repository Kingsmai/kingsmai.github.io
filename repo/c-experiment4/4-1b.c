/*
    Name:循环实验4-1b 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-03 2:25:33 PM
    Description:求3+6+9+...+99的和。
    	此题用 while 循环 
*/

#include<stdio.h>
int main()
{
 	int i=3,sum=0;
	while (i<=99)
	{
		sum+=i;
		i=i+3;
	}
	printf("Sum=%d",sum);
	return 0;
}
