#include <stdio.h>
int main ()
{
	float length,width,C,S;			//定义长、宽、周长、面积 
	printf("请输入矩形长度(x)：");	//提示使用者输入边长
	scanf("%f",&length);			//边长保存在 length 空间
	printf("请输入矩形宽度(y)：");	//提示使用者输入边宽 
	scanf("%f",&width);				//边宽保存在 width 空间
	C=(length*2)+(width*2);			//计算边长
	S=length*width;					//计算面积 
	printf("周长为%.2f（单位），面积为%.2f（平方单位）。",C,S);	//输出结果 
	return 0;
} 
