#include<stdio.h>
int main(){
    int day;
    printf("输入数字以查看星期几(1-7)\n");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("星期一\n");
        break;
        case 2:
        printf("星期二\n");
        break;
        case 3:
        printf("星期三\n");
        break;
        case 4:
        printf("星期四\n");
        break;
        case 5:
        printf("星期五\n");
        break;
        case 6:
        printf("星期六\n");
        break;
        case 7:
        printf("星期天\n");
        break;
        default:
        printf("你故意找茬是吧！！\n");
        break;
        }
    //     switch (day)
    // {
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //     printf("休息日\n");
    //     break;
    //     case 6:
    //     case 7:
    //     printf("工作日\n");
    //     break;
    // default:
    // printf("你故意找茬是吧！！\n");
    // }
    // return 0;
}