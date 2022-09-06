#include<stdio.h>//加减法-可能会溢出
int main()
{
    int a = 5;
    int b = 3;
    printf("before:\na=%d\nb=%d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("now:\na=%d\nb=%d\n",a,b);
    return 0;
}


// #include<stdio.h>//创建临时变量
// int main()
// {
//     int a = 5;
//     int b = 3;
//     printf("before:\na=%d\nb=%d\n",a,b);
//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
//     printf("now:\na=%d\nb=%d\n",a,b);
//     return 0;
// }

// #include<stdio.h>//按位异或yyds
// int main()
// {
//     int a = 5;
//     int b = 3;
//     printf("before:\na=%d\nb=%d\n",a,b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("now:\na=%d\nb=%d\n",a,b);
//     return 0;
// }
