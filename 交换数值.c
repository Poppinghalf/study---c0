#include<stdio.h>//�Ӽ���-���ܻ����
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


// #include<stdio.h>//������ʱ����
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

// #include<stdio.h>//��λ���yyds
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
