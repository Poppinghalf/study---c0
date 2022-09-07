#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    char password[20];
    printf("请输入密码:\n");
    scanf("%s",password);
    getchar();//带走输入缓冲区的"\n""
    printf("确认密码?\n(Y/N)\n");
    ch = getchar();
if(ch == 'Y')
    {
    if(strcmp(password,"abc123456") == 0)
    {
        printf("密码正确\n");
    }
    else
    {
    printf("密码错误\n");
    }
    }
else
    {
    printf("取消确认\n");
    }
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[1];
//     char password[20];
//     printf("请输入密码\n");
//     scanf("%s",password);
//     printf("确认密码?\n(Y/N)\n");
//     scanf("%s",ch);
//     if(strcmp(ch,"Y")==0)
//     {
//         if(strcmp(password,"abc12345")==0)
//         {
//             printf("密码正确");
//         }
//         else
//         {
//             printf("密码错误");
//         }
//     }
//     else
//     {
//         printf("取消确认");
//     }
// }