#include<stdio.h>
int main()
{
    int m,t,s;
    printf("����m,t,s\n");
    scanf("%d%d%d",&m,&t,&s);
    int k = s/t;//�Ե�
    int x;//ʣ�µ�
    if(k>m)
    {
        x = 0;
        printf("%d",x);
    }
    else if(k<m)
    {
        if((s%t) != 0)
        {
            x = m-k-1;
        }
        else
        {
            x = m-k;
        }
    }
    else
    {
        x = m-k;
    }
    printf("%d",x);
}