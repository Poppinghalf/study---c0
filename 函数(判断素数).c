#include<stdio.h>


void fuck(int x)
{
    int i;
    for(i=2;i<x;i++)
    if(x%i==0)
    {
        printf("这个数不是素数\n");
        break;
    }
    if(i == x)
    {
        printf("这个数是素数");
    }
}


int main()
{
    int n;
    printf("请输入数字\n");
    scanf("%d",&n);
    fuck(n);
    return 0;
}