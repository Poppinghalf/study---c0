#include<stdio.h>
int main()
{
    int year;
    int count = 0;
    for(year = 1000;year<=2000;year++)
    {
        if(year%4 ==0&&year%100 != 0)
        {
            printf("%d  ",year);
            count++;
        }
        else if(year%400 ==0)
        {                       //闰年判断标准：
            printf("%d  ",year);//1.能被4整除不能被100整除
            count++;            //2.能被400整除
        }
    }
    printf("\n一共有%d个年份\n",count);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int year;
//     int count = 0;
//     for(year = 1000;year<=2000;year++)
//     {
//         if(((year % 4 == 0) && (year%100 != 0)) || (year % 400 == 0))//使用逻辑或||
//         {
//             printf("%d  ",year);
//             count++;
//         }
//     }
//     printf("\n总的年份个数是:%d",count);
//     return 0;
// }