#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    char password[20];
    printf("����������:\n");
    scanf("%s",password);
    getchar();//�������뻺������"\n""
    printf("ȷ������?\n(Y/N)\n");
    ch = getchar();
if(ch == 'Y')
    {
    if(strcmp(password,"abc123456") == 0)
    {
        printf("������ȷ\n");
    }
    else
    {
    printf("�������\n");
    }
    }
else
    {
    printf("ȡ��ȷ��\n");
    }
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[1];
//     char password[20];
//     printf("����������\n");
//     scanf("%s",password);
//     printf("ȷ������?\n(Y/N)\n");
//     scanf("%s",ch);
//     if(strcmp(ch,"Y")==0)
//     {
//         if(strcmp(password,"abc12345")==0)
//         {
//             printf("������ȷ");
//         }
//         else
//         {
//             printf("�������");
//         }
//     }
//     else
//     {
//         printf("ȡ��ȷ��");
//     }
// }