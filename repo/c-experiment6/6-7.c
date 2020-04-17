/*
    Name: 数组实验 6-7 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-23 1:24:19 AM
    Description: 编写一个程序，把一个数插入到一个有序的有10个元素的数组中，并使插入后的数组仍为有序数组
*/
#include<stdio.h>
int main()
{
	int num[11]={10,20,30,40,50,60,70,80,90,100},i,x;	//num原先的数 i控制循环 x输入存储位置 
	printf("插入前的数组：");
	for(i=0;i<10;i++)		//输出原有数组 
		printf("%4d",num[i]);
	printf("\n\n请输入要插入的值：");
	scanf("%d",&x);
	for(i=9;i>=0;i--)
		if(num[i]<x)
		{
			num[i+1]=x;		//将数值插入到数组中 
			break;
		}
		else
			num[i+1]=num[i];	//否则数组位置往后挪一位
	if(i<0)
		num[0]=x;			//如果所有值都比x大，将x插入到num[0]中
	printf("\n插入后的数组：");
	for(i=0;i<11;i++)		//输出改变后的数组 
		printf("%4d",num[i]);
	return 0;
}

