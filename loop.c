#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    while(~scanf("%s",str))
    {
        int i;
        int len = strlen(str);
        int count  =  0;
        for(i = 0;i<len;i++)//�ȼ���o
        {
            if(str[i]=='o')
            {
                count++;
            }
        }
        for(i = 0;i<len;i++)//����lp����ת��Ϊo
        {
            if(str[i] == 'l'&&str[i+1]=='p')
            {
                count += 4;
                str[i] = 'o';
                str[i+1] = 'o';
            }
        }
        for(i = 0;i<len;i++)//��������l\p
        {
            if(str[i]=='l')
            {
                count++;
            }
            else if(str[i]=='p')
            {
                count  += 2;
            }
        }
        printf("%d\n",count);
    }
}