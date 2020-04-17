#include <stdio.h>
int main()
{
    float a,b;
    printf("输入第一个实数：");
    scanf("%f",&a);
    printf("输入第二个实数：");
    scanf("%f",&b);
    printf("和：%.2f + %.2f = %.2f\n",a,b,(a+b));		//和 
    printf("差：%.2f - %.2f = %.2f\n",a,b,(a-b));		//差 
    printf("积：%.2f * %.2f = %.2f\n",a,b,(a*b));		//积 
    if (b!=0)		//b 值非 0 时运行 
    {
    	printf("商：%.2f / %.2f = %.2f\n",a,b,(a/b));	//商 
	}
	else
	{
		printf("商：err: 输入的第二个数值不得为零。");
	} 
    return 0;
}
