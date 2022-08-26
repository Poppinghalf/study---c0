#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(i == j)//ÊÔÊÔ°Ñ == ¸Ä³É  =  £¨doge£©
        {
            printf("%d  ",j);
        }
    }
    return 0;
}