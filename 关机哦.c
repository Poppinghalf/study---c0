#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char input[20];
    system("shutdown -s -t 60");
    printf("�ٹ�һ���ӵ��Ծ͹ػ���Ŷ�����롰�ֻ��ˡ�ȡ���ػ�\n");
    scanf("%s",&input);
    if((strcmp(input,"�ֻ���") == 0))
    {
        system("shutdown -a");
    }
    return 0;
}