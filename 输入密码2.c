#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    int i;
    printf("请输入密码\n");
    for(i=1;i<=5;i++)
    {
        scanf("%s",password);
        if(strcmp(password,"123456") == 0)
            {
                printf("密码正确\n");
            break;
            }
        else
            {
            int c = 5-i;
            printf("密码错误,你还有%d次机会\n",c);
            }4
    }
    if(i==6)
    printf("密码错误五次,账户锁定\n");
    return 0;
}