/*
    Name: 循环实验 6-3 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-20 10:49:21 PM
    Description: 从键盘输入一个4*3整型数组赋值，找出其中的最小值，并将该值和其行号与列号输出出来
*/
#include<stdio.h>
int main()
{
	int a[4][3],i,j,min=9999,r,c;	//i行 j列 min最小值 r输出行 c输出列 
	for(i=0;i<4;i++)		//外循环，控制行
		for(j=0;j<3;j++)	//内循环，控制列 
		{
			printf("请输入[%d][%d]的值：",i,j);
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			if(a[i][j]<min)	//当这个值小于最小值时 
			{
				min=a[i][j];
				r=i;c=j;
			}
	printf("最小值为%d",min);
	printf("所在位置为：[%d][%d]",r,c);
	return 0;
}

