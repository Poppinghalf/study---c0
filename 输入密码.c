#include<stdio.h>
int main(){
    char ch;
    int password;
    printf("����������:\n");
    scanf("%d",&password);
    printf("ȷ������?\n(Y/N)\n");
    scanf("%s",&ch);
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