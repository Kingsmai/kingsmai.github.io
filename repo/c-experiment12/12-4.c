/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/26 23:45:40
*	Desc	:
*	定义一个结构体数据类型person，用来描述人的基本信息，
*	具体信息包括姓名，身份证号码，电话号码，年龄，
*	定义一个结构体数组，包含3个人，
*	并输入他们的这些基本信息后，并将信息输出。 
*	（要求：用结构体指针处理）
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
struct person
{
	char name[10];
	int id;
	int phone;
	int age; 
}human[3], *pperson;
int i,j;	//控制循环 
int main()
{
	int len=sizeof(human) / sizeof(struct person);	//计算结构体长度 
	for(pperson=human;pperson<human+len;pperson++)	//指针循环输入 
	{
		printf("Name\t: ");
		scanf("%s",pperson->name);
		printf("ID\t: ");
		scanf("%d",&pperson->id);
		printf("Phone\t: ");
		scanf("%d",&pperson->phone);
		printf("Age\t: ");
		scanf("%d",&pperson->age);
		printf("\n");
	}
	printf("Name\t\tID\t\tPhone\t\tAge\n");
	for(pperson=0,pperson=human;pperson<human+len;pperson++)	//输出结果 
	{
		printf("%s\t\t%d\t\t%d\t%d\n",pperson->name,pperson->id,pperson->phone,pperson->age);
	}
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

