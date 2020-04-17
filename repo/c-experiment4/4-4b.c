/*
    Name: 循环实验4-4b
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 7:57:24 AM
    Description: 输出1000以内能够被3整除但是不能被7整除的数。
    	此题用 while 循环 
*/
#include<stdio.h>
int main()
{
	int i=1;
	while (i<=1000)
	{
		if ((i%3==0)&&(i%7!=0))
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
	return 0;
}
