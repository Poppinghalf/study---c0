#include<stdio.h>



int fib(int x)
{
    if(x<=2)
    {
        return 1;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
}


int main()
{
    int a;
    printf("ÇëÊäÈëÊý×Ö\n");
    scanf("%d",&a); 
    int b = fib(a);
    printf("%d",b);
    return 0;
}