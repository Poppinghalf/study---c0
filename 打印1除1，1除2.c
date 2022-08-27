#include<stdio.h>
int main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for(i = 1;i<=100;i++)
    {
        sum += flag*1.0/i;
        flag = -flag;
    }
    printf("%lf",sum);
}
// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     int b = 2;
//     double sum = 0.0;
//     for(a = 1,b = 2;a<=100;a+=2,b+=2)
//     {
//         double c = 1.0/a - 1.0/b;
//         if(a<=100&&b>100)
//         {
//             sum += 1.0/a;
//             break;
//         }
//         if(a>100)
//         {
//             break;
//         }
//         sum += c;
//     }
//     printf("%lf",sum);
//     return 0;
// }

