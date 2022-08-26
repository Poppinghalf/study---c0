#include<stdio.h>
int main()
{
    int a = 0;
    int count = 0;
    for(a=0;a<=100;a++)
    {
    if(a/10 == 9)
        {
            count++;
        }
    if(a%10 == 9)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i = 1;i <= 100;i++)
//     {
//         if(i%10 == 9)
//         {
//             count++;
//         }
//         if(i/10 == 9)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }