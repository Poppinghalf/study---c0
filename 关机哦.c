#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char input[20];
    system("shutdown -s -t 60");
    printf("�ٹ�һ���ӵ��Ծ͹ػ���Ŷ�����롰�ֻ��ˡ�ȡ���ػ�\n������\n");
    while(1)
    {
    scanf("%s",&input);
    if((strcmp(input,"�ֻ���") == 0))
    {
        system("shutdown -a");
        printf("����û����\n");
        break;
    }
    else
    printf("���벻����ֹ�ػ���\n");
    }
    return 0;
}