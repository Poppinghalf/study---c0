#include<stdio.h>
int main()
{
    int num;
    printf("请输入数字:\n");
    scanf("%d",&num);
    int count = 0;
    int i;
    for(i=0;i<32;i++)
    {
        if(((num>>i)&(1)) == 1)
        {
            count++;
        }
    }
    printf("1的个数是:%d",count);
}