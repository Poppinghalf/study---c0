#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    int i;
    for(i=1;i<=3;i++)
    {
        printf("����������\n");
        scanf("%s",password);
        if(strcmp(password,"123456") == 0)
            {
                printf("��¼�ɹ�\n");
            break;
            }
        else
            {
            printf("�������������\n");
            }
    }
    if(i==4)
    printf("����������Σ��˻�����");
    return 0;
}