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