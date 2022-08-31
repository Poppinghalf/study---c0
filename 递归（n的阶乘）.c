#include<stdio.h>


int fuck(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x*fuck(x-1);
    }
}


int main()
{
    int n;
    int ret;
    printf("ÇëÊäÈëÊý×Ön\n");
    scanf("%d",&n);
    ret = fuck(n);
    printf("%d",ret);
    return 0;
}