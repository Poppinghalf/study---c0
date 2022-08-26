#include<stdio.h>
int main()
{
    int year;
    for(year = 1000;year<=2000;year++)
    {
        if(year%4 ==0&&year%100 != 0)
        {
            printf("%d  ",year);
        }
        else if(year%400 ==0)
        {                       //闰年判断标准：
            printf("%d  ",year);//1.能被4整除不能被100整除
                                //2.能被400整除
        }
    }
    return 0;
}