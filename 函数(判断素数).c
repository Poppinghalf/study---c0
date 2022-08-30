// #include<stdio.h>


// void fuck(int x)
// {
//     int i;
//     for(i=2;i<x;i++)
//     {
//     if(x%i==0)
//     {
//         printf("这个数不是素数\n");
//         break;
//     }
//     }
//     if(i == x)
//     {
//         printf("这个数是素数");
//     }
// }


// int main()
// {
//     int n;
//     printf("请输入数字\n");
//     scanf("%d",&n);
//     fuck(n);
//     return 0;
// }
#include<stdio.h>


int fuck(int x)
{
    int j;
    for(j=2;j<x;j++)
    {
        if(x%j==0)
        {
            return 0;
            break;
        }
    }
    if(j==x)
    {
        return 1;
    }
}


int main()
{
    int i;
    for(i = 100;i<=200;i++)
    {
        if(fuck(i)==1)
        {
            printf("%d   ",i);
        }
    }
    return 0;
}