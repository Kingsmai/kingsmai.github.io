#include<stdio.h>
int main()
{
	char Sex,Exercise,Diet; 
	float Father,Mother,Height;
	printf("孩子身高预测器\n");
	printf("请输入孩子性别(M表示男，F表示女)：");
	scanf("%c",&Sex);
	getchar();
	printf("请输入父亲身高：");
	scanf("%f",&Father);
	getchar();
	printf("请输入母亲身高：");
	scanf("%f",&Mother);
	getchar();
	if (Sex=='M'||Sex=='m')
	{
		Height=(Father+Mother)*0.54;
		printf("孩子为男性，初步估计身高为：%.2f cm\n",Height);
	}
	if (Sex=='F'||Sex=='f')
	{
		Height=((Father*0.923)+Mother)/2;
		printf("孩子为女性，初步估计身高为：%.2f cm\n",Height);
	}
	printf("孩子是否经常锻炼？（Y是，N否)");
	scanf("%c",&Exercise);
	getchar();
	if (Exercise=='Y'||Exercise=='y')
		{Height=Height+(Height*2/100);}
	printf("孩子是否有良好的饮食习惯？（Y是，N否）");
	scanf("%c",&Diet);
	getchar();
	if (Diet=='Y'||Diet=='y')
		{Height=Height+(Height*1.5/100);}
	printf("计算完毕，孩子最终预测身高为：%.2f cm",Height);
	return 0;
}
