/*
    Name:判断小孩年龄组 
    Copyright:
    Author:Xiaomai
    Date: 11/1/2019 8:47:21 AM
    Description:游戏规则规定0～6岁儿童可参加A组游戏，7～12可参加B组游戏，13～15岁参加C组游戏，16、17、18的岁可参加D组游戏。请编写一个程序，输入参赛年龄，判断该儿童参加哪组游戏。
*/

#include<stdio.h>
int main()
{
	int age;
	printf("请输入孩子的年龄：");
	scanf("%d",&age);
	if (age>=0&&age<=6)
	{
		printf("%d岁，可参加 A 组游戏。",age);
	}
	if (age>=7&&age<=12)
	{
		printf("%d岁，可参加 B 组游戏。",age);
	}
	if (age>=13&&age<=15)
	{
		printf("%d岁，可参加 C 组游戏。",age);
	}
	if (age>=16&&age<=18)
	{
		printf("%d岁，可参加 D 组游戏。",age);
	}
	return 0;
}
