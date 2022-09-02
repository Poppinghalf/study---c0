#include<stdio.h>


int fuck(int x,int y)
{
    if(y<1)
    {
        return 1;
    }
    else
    {
        return x*fuck(x,y-1);
    }
}


int main()
{
    int a,b;
    int i;
    printf("ÇëÊäÈëx  ºÍ   n\n");
    scanf("%d%d",&a,&b);
    i = fuck(a,b);
    printf("%d",i);
    return 0;
}