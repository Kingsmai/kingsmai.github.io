/*
    Name: 循环实验4-7 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 9:56:58 AM
    Description: 输入两个整数a和b，求该数的最小公倍数。
*/
#include<stdio.h>
int main()
{
    int a, b, temp, i;
    printf("Input a & b:");
    scanf("%d%d", &a, &b);
    if(a<b)  /*比较大小，使得m中存储大数，n中存储小数*/
    {
        temp = a;
        a = b;
        b = temp;
    }
    for(i=a; i>0; i++)  /*从大数开始寻找满足条件的自然数*/
        if(i%a==0 && i%b==0)
        {/*输出满足条件的自然数并结束循环*/
            printf("The LCW of %d and %d is: %d\n", a, b, i);
            break;
        }
    return 0;
}
