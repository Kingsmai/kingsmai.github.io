/*
    Name: 循环实验 5-5 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-13 8:29:57 AM
    Description: 在模拟自动饮料机运行的过程中，输入数字n，
		当输入数字1-5时候给出对应的饮料（饮料名称自己定义），
		输入其他值的时候给出非法操作的信息，提示重新输入，
		当输入的值为0时，模拟自动饮料机停止运行。
*/
#include<stdio.h>
int main()
{
	int Code=1;
	while (Code)
	{
		printf("Please input code(1~5):");
		scanf("%d",&Code);
		switch(Code)
		{
			case 1: printf("豆花\n");break;
			case 2: printf("珍珠奶茶\n");break;
			case 3: printf("白事可乐\n");break;
			case 4: printf("可口可乐\n");break;
			case 5: printf("抹茶\n");break;
			default: printf("输入错误！\n");break; 
		}
	}
	return 0;
}

