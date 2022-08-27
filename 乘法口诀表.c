#include<stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    for(a = 1;a <= 9; a++)
    {
        for(b=1;b<=a;b++)
        {
            int c = a*b;
            printf("%d*%d=%2d  ",a,b,c);
            if(b == a)
            {
                printf("\n");
            }
        }
    }
    return 0;
}