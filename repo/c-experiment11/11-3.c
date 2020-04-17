/*
	Name	: 指针实验 11-3 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/22 18:46:48
	Description: 输入一个3*4的整型数组，对其进行转置后输出
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
int transpose();
int main()
{
	int matrix[3][4];
	int *p0=&matrix[0][0];
	int *p1=&matrix[2][3];
	int numsave;
	int i,j;	//控制循环 
    //数组元素地址连续 指针p0 p1 分别指向一头一尾，循环向中间会和，并交换数值
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			printf("Please input data [%d][%d]: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	printf("\n");
	printf("Matrix inputed:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%4d",matrix[i][j]);
		printf("\n");
	}
	while(1)
    {
        numsave=*p0;
        *p0=*p1;
        *p1=numsave;
        p0++;
        p1--;
        if(p1-p0==1)//因为是偶数个元素，所以一头一尾取，最后两指针地址相差1
            break;
    }
	printf("\n");
	printf("Transposed Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%4d",matrix[i][j]);
		printf("\n");
	}
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

