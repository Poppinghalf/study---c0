#include<stdio.h>
int main()
{
    char arr[4];
    int i;
    printf("要输入几组\n");
    scanf("%d",&i);
        while(i>0)
{
    int count = 0;
    printf("请输入不超过4个字符\n");
    scanf("%s",arr);
    if(arr[0] == 'l'&&arr[1] =='p')
    {
        count += 4;
        if(arr[2] == 'l'&&arr[3] =='p')
        {
            count += 4;
        }
        else if(arr[2] == 'l'||arr[2] == 'o')
        {
            count += 1;
            if(arr[3] == 'l'||arr[3] == 'o')
            count += 1;
            else
            {
                count += 2;
            }
        }
        else
        {
            count += 2;
            if(arr[3] == 'l'||arr[3] == 'o')
            count += 1;
            else
            {
                count += 2;
            }
        }
    }
    else if(arr[1] == 'l'&&arr[2] =='p')
    {
        count += 4;
        if(arr[0] == 'l'||arr[0] == 'o')
        {
            count += 1;
            {
                if(arr[3] == 'l'||arr[3] == 'o')
                {
                    count += 1;
                }
                else
                {
                    count += 2;
                }
            }
        }
        else
        {
            count += 2;
            {
                if(arr[3] == 'l'||arr[3] == 'o')
                {
                    count += 1;
                }
                else
                {
                    count += 2;
                }
            }
        }
    }
    else if(arr[2] == 'l'&&arr[3] =='p')
    {
        count += 4;
        if(arr[0] == 'l'&&arr[1] =='p')
        {
            count += 4;
        }
        else if(arr[0] == 'l'||arr[0] == 'o')
        {
            count += 1;
            if(arr[1] == 'l'||arr[1] == 'o')
            count += 1;
            else
            {
                count += 2;
            }
        }
        else
        {
            count += 2;
            if(arr[1] == 'l'||arr[1] == 'o')
            count += 1;
            else
            {
                count += 2;
            }
        }
    }
    else if(!(arr[0] == 'l'&&arr[1] =='p')&&!(arr[1] == 'l'&&arr[2] =='p')&&!(arr[2] == 'l'&&arr[3] =='p'))
    {
        int i;
        for(i = 0;i<4;i++)
        {
            if(arr[i] == 'l'||arr[i] == 'o')
            {
                count += 1;
            }
            else
            {
                count += 2;
            }
        }
    }
    printf("%d\n",count);
    i--;
}
    return 0;
}