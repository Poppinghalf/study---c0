#include<stdio.h>
int main()
{
    int year;
    for(year = 1000;year<=5000;year++)
    {
        if(year%4 ==0&&year%100 != 0)
        {
            printf("%d  ",year);
        }
    }
    return 0;
}