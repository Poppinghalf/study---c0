#include<stdio.h>
int main()
{
    int a,b;
    int i;
    int c;
    int count = 0;
    printf("��������������\n");
    scanf("%d%d",&a,&b);
    c = a^b;
    for(i = 0;i<32;i++)
    {
        if(((c>>i)&1) == 1)
        {
            count++;
        }
    }
    printf("��%d������λ��ͬ",count);
    return 0;
}