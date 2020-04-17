#include <stdio.h>
int main()
{
	int a,b,c,d,e;						//定义5个整数值 
	printf("请输入一个四位数的整数:");	//提示使用者输入数值 
	scanf("%d",&a);						//数值存储在 a 
	b=a/1000;							//找千位数 
	c=(a-b*1000)/100;					//找百位数，为避免四舍五入的情况发生，所以减掉尾数 
	d=(a-b*1000-c*100)/10;				//找十位数，同上 
	e=a%10;								//用余数找个位数 
	printf("\n个位数%d",e);
	printf("\n十位数%d",d);
	printf("\n百位数%d",c);
	printf("\n千位数%d",b);
	printf("\n倒序为：%d%d%d%d",e,d,c,b);
	return 0;
}
