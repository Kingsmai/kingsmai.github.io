/*
    Name: 循环实验4-4a
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 7:40:29 AM
    Description: 输出1000以内能够被3整除但是不能被7整除的数。
    	此题用 for 循环 
*/
#include<stdio.h>
int main()
{
	int i;
	for (i=1;i<=1000;i++)
	{
		if ((i%3==0)&&(i%7!=0))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
