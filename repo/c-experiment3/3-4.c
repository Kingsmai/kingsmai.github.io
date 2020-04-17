/*
    Name:每周的锻炼计划 
    Copyright:
    Author:Xiaomai
    Date: 11/1/2019 9:10:04 AM
    Description:设计一个程序，按照制定的每周锻炼计划，显示对应的课外活动安排。
    周一	周二	周三	周四	周五	周六	周日
	游泳	羽毛球	游泳	羽毛球	瑜伽	游泳	瑜伽
*/

#include<stdio.h>
int main()
{
	int week,act;
	printf("请输入星期（以数字代替）：");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
		case 3:
		case 6:
			print("当天的课外活动安排为：游泳。");
			break;
		case 2:
		case 4:
			print("当天的课外活动安排为：羽毛球。");
			break;
		case 5:
		case 7:
			print("当天的课外活动安排为：瑜伽。");
			break;
	}
	return 0;
} 
