#include<stdio.h>
int main(){
    int ch;
    int password;
    printf("����������:\n");
    scanf("%d",&password);
    printf("ȷ������?\n    1ȷ��,2ȡ��ȷ��\n    (1/2)\n");
    scanf("%d",&ch);
if(ch == 1)
    {printf("ȷ������\n");
    if(password == 1234)
        {printf("������ȷ\n");}

    else
        printf("�������\n");}
else
    {printf("ȡ��ȷ��\n");}
    return 0;
}