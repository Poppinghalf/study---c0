#include<stdio.h>

void new_line()
{
    printf("hehe\n");
}

void three_line()
{
    int i;
    for(i=1;i<=3;i++)
    {
        new_line();
    }
}


int main()
{
    three_line();
    return 0;
}