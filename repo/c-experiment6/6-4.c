/*
    Name: 数组实验 6-4 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-22 5:20:50 PM
    Description: 计算出给定矩阵中主对角线元素的和
*/
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum;	//定义3*3矩阵 
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("请输入[%d][%d]的值：",i,j);
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<3;i++)
        sum+=a[i][i];		//定位对角线（行列相同） 
    printf("\n答案为 %d",sum);
	return 0;
}

