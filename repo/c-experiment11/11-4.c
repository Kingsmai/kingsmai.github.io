/*
	Name	:
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/23 10:46:28
	Description: 输入3个同学4门课程的成绩，
		以课程为单位输出：每门课程每个同学的成绩，以及最高分，最低分和平均分
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
int main()
{
	float score[3][4];
	float sum,max[4],min[4],avg[4]; 
	int i,j;	//控制循环
	for(i=0;i<4;i++)	//最小值最大值数组初始化
	{
		max[i]=0;
		min[i]=999;
		avg[i]=0;
	} 
	for(i=0;i<3;i++)	//输入成绩 
	{
		printf("Please input #%d student\47s score:\n",i+1);
		printf("Chinese\t\t: ");
		scanf("%f",&score[i][0]);
		printf("English\t\t: ");
		scanf("%f",&score[i][1]);
		printf("C-Language\t: ");
		scanf("%f",&score[i][2]);
		printf("Web Design\t: ");
		scanf("%f",&score[i][3]);
		printf("\n");
	}
	for(j=0;j<4;j++)	//以课程为单位
	{
		sum=0;	//总分初始化 
		for(i=0;i<3;i++)
		{
			sum+=score[i][j];
			if(max[j]<score[i][j])
				max[j]=score[i][j];
			if(min[j]>score[i][j])
				min[j]=score[i][j];
		}
		avg[j]=sum/4;
	}
	printf("Chinese\t\t highest score: %.2f, lowest score: %.2f, avg score: %.2f\n",max[0],min[0],avg[0]);
	printf("English\t\t highest score: %.2f, lowest score: %.2f, avg score: %.2f\n",max[1],min[1],avg[1]);
	printf("C-Language\t highest score: %.2f, lowest score: %.2f, avg score: %.2f\n",max[2],min[2],avg[2]);
	printf("Web Design\t highest score: %.2f, lowest score: %.2f, avg score: %.2f\n",max[3],min[3],avg[3]);
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

