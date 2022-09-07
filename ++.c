#include<stdio.h>
int main()
{
    int a = 0;
    // int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    (a++)&&(++b)&&(d++);//在&&的情况下，出现0即停止
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    (a++)||(++b)||(d++);//在||的情况下，出现真即停止
    printf("\n%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}