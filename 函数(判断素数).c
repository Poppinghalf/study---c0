#include<stdio.h>


void fuck(int x)
{
    int i;
    for(i=2;i<x;i++)
    if(x%i==0)
    {
        printf("�������������\n");
        break;
    }
    if(i == x)
    {
        printf("�����������");
    }
}


int main()
{
    int n;
    printf("����������\n");
    scanf("%d",&n);
    fuck(n);
    return 0;
}