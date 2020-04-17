/*
    Name: 数组实验 6-1 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-20 9:14:44 PM
    Description: 将一个长度为8的整型数组中的值按逆序存放
	（数组中数据自己从键盘动态输入）
*/
#include<stdio.h>
int main()
{
	int a[8],i,j,x=0;	//i,j序数变量 x为临时变量 
	for (i=0;i<8;i++)	//从键盘输入八位整型数 
	{
		printf("请输入第%d位整型数：",i+1);
		scanf("%d",&a[i]);
	}
	for (j=0;j<8;j++)	//冒泡排序法（降序） 
	{
		for (i=j+1;i<8;i++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		} 
	} 
	for (i=0;i<8;i++)	//循环输出
	{
		printf("%d\t",a[i]);
	} 
	return 0;
}

