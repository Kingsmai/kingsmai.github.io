/*
    Name: 循环实验4-6 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 9:35:24 AM
    Description:已知斐波那契数列问题的特点为：
		F(1)=1				(n=1)
		F(2)=1				(n=2)
		F(n)=F(n-1)+F(n-2)	(n>=3)
		要求输出斐波那契序列的前20项。 

*/
#include<stdio.h>
int main()
{
	int i,a=1,b=1,temp;			//temp为临时存储空间
	printf("%5d\n%5d\n",a,b);   //输出菲波那契数列的前2项
	for(i=2;i<20;i++)			//输出到第40项  
	{
		temp=a+b;				//根据前面2项计算新的一项
		printf("%5d\n",temp);
		a=b;					//为下一项计算作准备
		b=temp;
	}
	return 0;
}

