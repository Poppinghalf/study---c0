#include<stdio.h>


void swap(int* x,int* y)
{
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
    int a = 20;
    int b = 30;
    printf("a = %d   b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d   b = %d",a,b);
    return 0;
}