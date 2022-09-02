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

int fib2(int x)
{
    int a = 1;
    int b = 1;
    int c;
    while(x>2)
    {
        c = a+b;
        a = b;
        b = c;
        x--;
    }
    return c;
}


int main()
{
    int a;
    printf("ÇëÊäÈëÊı×Ö\n");
    scanf("%d",&a); 
    int b = fib(a);
    printf("%d\n",b);
    int c = fib2(a);
    printf("%d",b);
    return 0;
}