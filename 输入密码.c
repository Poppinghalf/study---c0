#include<stdio.h>
#include<stdio.h>
int main(){
    char ch;
    int password;
    printf("����������:\n");
    scanf("%d",&password);
    getchar();//�������뻺������"\n""
    printf("ȷ������?\n(Y/N)\n");
    ch = getchar();
if(ch == 'Y')
    {printf("ȷ������\n");
    if(password == 1234)
        {printf("������ȷ\n");}

    else
        printf("�������\n");}
else
    {printf("ȡ��ȷ��\n");}
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[1];
//     char password[20];
//     printf("����������\n");
//     scanf("%s",&password);
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