#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char input[20];
    system("shutdown -s -t 60");
    printf("再过一分钟电脑就关机了哦，输入“手滑了”取消关机\n请输入\n");
    while(1)
    {
    scanf("%s",&input);
    if((strcmp(input,"手滑了") == 0))
    {
        system("shutdown -a");
        printf("现在没事了\n");
        break;
    }
    else
    printf("还想不想阻止关机了\n");
    }
    return 0;
}