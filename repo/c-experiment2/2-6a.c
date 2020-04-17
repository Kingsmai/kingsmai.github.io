/*
    Name:
    Copyright:
    Author:Xiaomai
    Date: 10/31/2019 10:46:58 AM
    Description:
*/

#include<stdio.h>
main ()
{
	int a,b,c,max,min;
	printf("请输入三个整数：");
	scanf("%d%d%d",a,b,c);
	min=a;			//将a值赋值于max 
	max=a;			//将a值赋值于min 
	if (b>max)		//如果b值大于max 
		{max=b;}	//b值赋值给max 
	if (b<min)		//如果b值小于min 
		{min=b;}	//b值赋值给min 
	if (c>max)
		{max=c;}
	if (c<min)
		{min=c;}
}
