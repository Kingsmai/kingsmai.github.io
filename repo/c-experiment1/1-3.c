#include<stdio.h>
int main()
{
	float UnitPrice,FinalPrice;			//定义两个浮点数 
	int Num;							//定义一个整数 
	printf("请输入物品单价和数量:");	//输出文字 
	scanf("%f%d",&UnitPrice,&Num);		//使用者输入数值，中间用空格区分 
	FinalPrice=UnitPrice*Num;			//计算单价×数量 
	printf("此物品单价为%.2f元，共%d个，总值%.2f元",UnitPrice,Num,FinalPrice);
										//输出说明，数值精确至小数点后2位 
	return 0;
}
