/*
    Name: 循环试验 5-3 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-12 2:53:43 PM
    Description: 在屏幕上输出图形
    
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main()
{
	int m,n;
	for(n=1;n<=4;n++)
	{
		for(m=1;m<=4-n;m++)
		printf(" ");
		for(m=1;m<=2*n-1;m++)
		printf("*");
		printf("\n");
	}
	for(n=3;n>0;n--)
	{
		for(m=1;m<=4-n;m++)
		printf(" ");
		for(m=1;m<=2*n-1;m++)
		printf("*");
		printf("\n");
	}
	return 0;
}

