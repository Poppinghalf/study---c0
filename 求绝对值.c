#include<stdio.h>
int main()
{
    double i;
    while(~scanf("%lf",&i))
    {
        if(i>=0)
        {
            printf("%.2lf\n",i);
        }
        else
        {
            printf("%.2lf\n",-i);
        }
    }
    return 0;
}