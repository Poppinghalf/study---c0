#include<stdio.h>
int main()
{
    int num;
    int i;
    printf("请输入数字\n");
    scanf("%d",&num);
    printf("打印奇数位");
    for(i = 30;i>=0;i-=2)
    {
        printf("%d ",((num>>i)&1));
    }
    printf("\n");
    printf("打印偶数位");
    for(i = 31;i>=1;i-=2)
    {
        printf("%d ",((num>>i)&1));
    }
    return 0;
}