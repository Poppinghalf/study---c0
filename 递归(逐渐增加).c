#include<stdio.h>


int add(int x)
{
    if(x<=1)
    {
    return 1;
    }
    else
    {
    return x+add(x-1);
    }
}


int main()
{
    int a;
    int sum = 0;
    printf("请输入数字\n");
    scanf("%d",&a);
    sum = add(a);
    printf("和为%d",sum);
    return 0;
}