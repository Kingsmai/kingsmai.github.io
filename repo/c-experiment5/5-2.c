/*
    Name: 循环实验 5-2 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-12 10:39:01 AM
    Description: 已知银行的年率为3%，
		则每月老师为希望工程存入100元，
		则20年后共有多少存款？
*/
#include<stdio.h>
int main()
{
	float Saving,MonthlyInvest;
	int i;
	MonthlyInvest=0.03/12;
	Saving=0;
	for (i=20*12;i>0;i--)		//i=20年 ×12个月 
	{
		Saving+=100+100*MonthlyInvest*i;
	}
	printf("Total Saving: %.2f",Saving);
	return 0;
}
