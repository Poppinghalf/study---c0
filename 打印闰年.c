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
        {                       //�����жϱ�׼��
            printf("%d  ",year);//1.�ܱ�4�������ܱ�100����
            count++;            //2.�ܱ�400����
        }
    }
    printf("\nһ����%d�����\n",count);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int year;
//     int count = 0;
//     for(year = 1000;year<=2000;year++)
//     {
//         if(((year % 4 == 0) && (year%100 != 0)) || (year % 400 == 0))//ʹ���߼���||
//         {
//             printf("%d  ",year);
//             count++;
//         }
//     }
//     printf("\n�ܵ���ݸ�����:%d",count);
//     return 0;
// }