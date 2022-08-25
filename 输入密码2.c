#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    int i;
    for(i=1;i<=3;i++)
    {
        printf("ÇëÊäÈëÃÜÂë\n");
        scanf("%s",password);
        if(strcmp(password,"123456") == 0)
            {
                printf("µÇÂ¼³É¹¦\n");
            break;
            }
        else
            {
            printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ\n");
            }
    }
    if(i==4)
    printf("ÃÜÂë´íÎóÈý´Î£¬ÕË»§Ëø¶¨");
    return 0;
}