#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    int i;
    printf("����������\n");
    for(i=1;i<=5;i++)
    {
        scanf("%s",password);
        if(strcmp(password,"123456") == 0)
            {
                printf("������ȷ\n");
            break;
            }
        else
            {
            int c = 5-i;
            printf("�������,�㻹��%d�λ���\n",c);
            }4
    }
    if(i==6)
    printf("����������,�˻�����\n");
    return 0;
}