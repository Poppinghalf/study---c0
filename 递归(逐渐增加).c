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
    printf("����������\n");
    scanf("%d",&a);
    sum = add(a);
    printf("��Ϊ%d",sum);
    return 0;
}