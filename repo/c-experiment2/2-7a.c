#include <stdio.h>
int main(void)
{
	int i;
	float a,max,min,avg,s=0;
	printf("请输入第1个数值:");
	scanf("%f",&a);
	max=min=a;
	s+=a;
	for(i=2;i<=10;i++)
	{
		printf("请输入第%d个数值:",i);
		scanf("%f",&a);
		s+=a;
		if(a>max)
			max=a;
		if(a<min)
			min=a;
	}
	avg=s/10;
	printf("最大值为%f\n最小值为%f\n平均值为%f",max,min,avg);
 }

