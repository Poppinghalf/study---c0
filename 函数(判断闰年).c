#include<stdio.h>


void fuck(int x)
{
    if((x%400 == 0)||((x%4 == 0)&&(x%100 != 0)))
    {
        printf("��һ��������");
    }
    else
    {
        printf("��һ�겻������");
    }
}


int main()
{
    int year;
    printf("���������\n");
    scanf("%d",&year);
    fuck(year);
    return 0;
}