#include<stdio.h>
int main()
{
	float Price,AfterDisc;
	printf("输入产品的吊牌价：");
	scanf("%f",&Price);
	if (Price>=100)
	{
		AfterDisc=Price-49;
		printf("减了49元，实际价格为：%.2f元",AfterDisc);
	}
	else
		printf("该商品实际价格为：%.2f元",Price);
	return 0;
}
