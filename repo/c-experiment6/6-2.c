/*
    Name: 循环实验 6-2 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-20 10:46:04 PM
    Description: 输入8个数据，然后按照由小到大的顺序输出
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
	for (j=0;j<8;j++)	//冒泡排序法（升序） 
	{
		for (i=j+1;i<8;i++)
		{
			if(a[i]<a[j])
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

