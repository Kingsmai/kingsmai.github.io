/*
    Name: 循环实验 5-4 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-13 8:21:14 AM
    Description: 输出50到150之间不能被5整除的整数。（要求continue语句进行解答）
*/
#include<stdio.h>
int main()
{
	int i;
	for(i=50;i<=150;i++)
	{
		if(i%5!=0)
			continue;
		printf("%d\t",i);
	} 
	return 0;
}

