/*
    Name: 函数实验 9-7 
    Copyright:
    Author: Xiaomai
    Date: 2019/12/12 9:31:05
    Description: 用冒泡法对输入的8个数排序，
		排序功能在子函数中实现，
		数据的输入输出在主函数中完成
*/
#include<stdio.h>
#define N 8
int i,j,a[N];
void arrange();
int main()
{
	for (i=0;i<N;i++)
	{
		printf("Please input value #%d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");
	arrange();
	printf("After arrange:\n");
	for (i=0;i<N;i++)
		printf("%4d",a[i]);
	return 0;
}
void arrange()
{
	int t;
	for(i=0;i<N-1;i++)			//比较N-1轮 
		for(j=0;j<N-1-i;j++)	//每轮比较 N-1-i 次 
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
