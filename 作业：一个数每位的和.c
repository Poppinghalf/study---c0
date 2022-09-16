#include<stdio.h>


int fuck(int x)
{
    if(x>9)
    {
        return fuck(x/10)+x%10;
    }
    else
    {
        return x;
    }
}


int main()
{
    int num;
    int ret;
    printf("ÇëÊäÈëÊı×Ö\n");
    scanf("%d",&num);
    ret = fuck(num);
    printf("ret = %d",ret);
    return 0;
}