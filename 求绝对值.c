#include<stdio.h>
int main()
{
    double a;
    int i;
    printf("Ҫ���뼸��\n");
    scanf("%d",&i);
    for(;i>0;i--)
    {
        printf("��������\n");
        scanf("%lf",&a);
        if(a<0)
        {
            a = -a;
        }
        else
        {
            a = a;
        }
        printf("%.2lf\n",a);
    }
    return 0;
}