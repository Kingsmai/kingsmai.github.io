/*
    Name:循环实验4-1a
    Copyright:
    Author:Xiaomai
    Date: 2019-11-03 11:16:58 AM
    Description:求3+6+9+...+99的和。
    	此题用 for 循环 
*/

#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=99/3;i++) 		//当i小于(99/3)，i自加 1 
	{
		sum+=i*3;				// i*3=3,6,9... 
	}
	printf("Sum=%d",sum);
	return 0;
}
