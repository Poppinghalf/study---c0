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
        for(i = 0;i<len;i++)//先检索o
        {
            if(str[i]=='o')
            {
                count++;
            }
        }
        for(i = 0;i<len;i++)//检索lp并且转化为o
        {
            if(str[i] == 'l'&&str[i+1]=='p')
            {
                count += 4;
                str[i] = 'o';
                str[i+1] = 'o';
            }
        }
        for(i = 0;i<len;i++)//单独检索l\p
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