#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    int i;
    printf("����������\n");
    for(i=1;i<6;i++)
    {
        int c = 5-i;
        scanf("%s",password);
        if(strcmp(password,"abc123456") == 0)
            {
                printf("������ȷ\n");
                break;
            }
        else
            {
            if(c>0)
            {
                printf("�������,�㻹��%d�λ���\n",c);
            }
            }
    }
    if(i==6)
    printf("����������,�˻�����\n");
    return 0;
}