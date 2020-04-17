/*
    Name: 循环实验4-5c
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 8:25:49 AM
    Description: 统计1000以内能够13整除的数的个数。
    	此题用 do-while 循环 
*/
#include<stdio.h>
int main()
{
	int i=1,j=0;
	do
	{
		if(i%13==0)
		{
			j=j+1;
		}
		i=i+1;
	}
	while (i<=1000);
	printf("能被 13 整除的数有 %d 个",j);
	return 0;
}

