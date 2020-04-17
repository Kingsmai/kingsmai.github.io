/*
    Name:
    Copyright:
    Author:Xiaomai
    Date: 2019-11-03 1:38:41 AM
    Description:制作测试体重计算器：h值是体重（kg）／[身高（m）的平方]，
		若h值在17－20之间为正常，低于17为偏瘦，高于20为偏胖。
		功能：输入体重和身高，并计算机出h值。
		正确输入密码"123"后输入h值和对应的胖瘦描述，
		若密码输入错误，则显示"您无权查看结果"。
*/

#include<stdio.h>
int main() 
{
	int pw;
	float weight,height,h;
	printf("请输入您的体重和身高(kg,m)：");
	scanf("%f,%f",&weight,&height);
	h=weight/(height*height);
	printf("计算成功，请输入密码以获取信息：");
	scanf("%d",&pw);
	if (pw==123)
	{
		if (h>=17&&h<=20)
		{
			printf("BMI值为：%.2f,属于正常范畴。\n",h); 
		}
		if (h<17)
		{
			printf("BMI值为：%.2f,属于偏瘦。\n",h); 
		}
		if (h>20)
		{
			printf("BMI值为：%.2f,属于偏胖。\n",h); 
		}
	}
	else
		printf("您无权查看结果\n");
	return 0; 
}
