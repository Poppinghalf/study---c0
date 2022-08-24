#include<stdio.h>
int main(){
    int ch;
    int password;
    printf("请输入密码:\n");
    scanf("%d",&password);
    printf("确认密码?\n    1确认,2取消确认\n    (1/2)\n");
    scanf("%d",&ch);
if(ch == 1)
    {printf("确认密码\n");
    if(password == 1234)
        {printf("密码正确\n");}

    else
        printf("密码错误\n");}
else
    {printf("取消确认\n");}
    return 0;
}