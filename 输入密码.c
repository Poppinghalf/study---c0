#include<stdio.h>
int main(){
    char ch;
    int password;
    printf("请输入密码:\n");
    scanf("%d",&password);
    getchar();//带走输入缓冲区的"\n""
    printf("确认密码?\n(Y/N)\n");
    ch = getchar();
if(ch == 'Y')
    {printf("确认密码\n");
    if(password == 1234)
        {printf("密码正确\n");}

    else
        printf("密码错误\n");}
else
    {printf("取消确认\n");}
    return 0;
}