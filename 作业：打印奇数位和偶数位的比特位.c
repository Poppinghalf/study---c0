#include<stdio.h>
int main()
{
    int num;
    int i;
    printf("����������\n");
    scanf("%d",&num);
    printf("��ӡ����λ");
    for(i = 30;i>=0;i-=2)
    {
        printf("%d ",((num>>i)&1));
    }
    printf("\n");
    printf("��ӡż��λ");
    for(i = 31;i>=1;i-=2)
    {
        printf("%d ",((num>>i)&1));
    }
    return 0;
}