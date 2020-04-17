/*
    Name: 循环实验4-5a 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 8:17:57 AM
    Description: 统计1000以内能够13整除的数的个数。
    	此题用 for 循环 
*/
#include<stdio.h>
int main()
{
	int i,j=0;
	for (i=1;i<=1000;i++)
	{
		if(i%13==0)
		{
			j=j+1;
		}
	}
	printf("能被 13 整除的数有 %d 个",j);
	return 0;
}

