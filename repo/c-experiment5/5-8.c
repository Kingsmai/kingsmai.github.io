/*
    Name:
    Copyright:
    Author: Xiaomai
    Date: 2019-11-13 5:20:33 PM
    Description: 使用随机数生成一个三位数作为谜底进行猜字游戏，
		每次猜的时候给出提示，
		如果输入的数字比猜的数字大，则给出大的信息，
		如果所输入的数字比猜的数字小，则给出小的信息，
		如果猜对了则给出赢了的信息，如果超出10次则给出输了的信息。
*/
#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int m,n,count;
	m=rand()%(999-100+1)+100;
	printf("请输入一个数值（100 ~ 999）：");
	while(1)
	{	
		scanf("%d",&n);
		count++;
		if(m==n)
		{	
			printf("恭喜你猜对了！\n");
			break;
		}
		else if (m>n&&count<=10)
			printf("对不起，你猜小了，再来一次！\n");
		else if (m<n&&count<=10)
			printf("对不起，你猜大了，再来一次！\n");
		if (count>10)
		{
			printf("对不起，你的机会用完了！正确答案是：%d，游戏结束。\n",m);
			break;
		}
	}
	return 0;
}

