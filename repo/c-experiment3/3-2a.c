/*
    Name: if 判断小孩年龄组 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-01 7:06:23 PM
    Description: more comfortable
*/

#include<stdio.h>
int main()
{
	int age;
	char group;
	printf("请输入孩子的年龄：");
	scanf("%d",&age);
	if (age>=0&&age<=6)
	{
		group='A';
	}
	if (age>=7&&age<=12)
	{
		group='B';
	}
	if (age>=13&&age<=15)
	{
		group='C';	
	}
	if (age>=16&&age<=18)
	{
		group='D';
	}
	printf("%d岁，可参加 %c 组游戏。",age,group);
	return 0;
}
