#include<stdio.h>
int main()
{
    int a = 10;
    int* p = &a;
    int** pa = &p;
    int*** paa = &pa;
    printf("%p\n%p\n%p\n",p,pa,paa);
    return 0;
}