#include<stdio.h>
int main()
{
    int a,b;
    int i;
    int c;
    int count = 0;
    printf("请输入两个数字\n");
    scanf("%d%d",&a,&b);
    c = a^b;
    for(i = 0;i<32;i++)
    {
        if(((c>>i)&1) == 1)
        {
            count++;
        }
    }
    printf("有%d个比特位不同",count);
    return 0;
}