#include<stdio.h>
int main()
{
    int a = 0;
    // int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    (a++)&&(++b)&&(d++);//��&&������£�����0��ֹͣ
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    (a++)||(++b)||(d++);//��||������£������漴ֹͣ
    printf("\n%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}