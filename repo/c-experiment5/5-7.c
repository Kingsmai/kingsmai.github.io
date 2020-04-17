/*
    Name: 循环实验 5-7 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-13 1:30:26 PM
    Description: 输出1000-2000之间第一个素数。
*/
#include<stdio.h>
int main()
{
    int i,j,flag=1;
    for(i=1000;i<=2000;i++)
    {
        for(j=2;j<=i/2;j++)
		{
     		if(i%j==0)
    		{
        		flag = 0;
  				break;
    		}
		}
     	if(flag==1)
     	{
        	printf("%d\n",i);
        	break;
    	}
    	flag=1;
    }
    return 0;
}
