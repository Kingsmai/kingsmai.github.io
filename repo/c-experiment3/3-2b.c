/*
    Name: switch 判断小孩年龄组 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-01 6:59:04 PM
    Description:游戏规则规定0～6岁儿童可参加A组游戏，7～12可参加B组游戏，13～15岁参加C组游戏，16、17、18的岁可参加D组游戏。请编写一个程序，输入参赛年龄，判断该儿童参加哪组游戏。
*/

#include<stdio.h>
#include<stdio.h>
int main()
{
	int age;
	char group;
	printf("请输入孩子的年龄：");
	scanf("%d",&age);
	switch (age)
	{
		case 0: case 1: case 2: case 3: case 4: case 5: case 6:
			group='A';
			break;
		case 7: case 8: case 9: case 10: case 11: case 12:
			group='B';
			break;
		case 13: case 14: case 15:
			group='C';
			break;
		case 16: case 17: case 18:
			group='D';
			break;

	}
	printf("%d岁，可参加 %c 组游戏。",age,group);
	return 0;
}
