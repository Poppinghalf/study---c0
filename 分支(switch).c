#include<stdio.h>
int main(){
    int day;
    printf("���������Բ鿴���ڼ�(1-7)\n");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("����һ\n");
        break;
        case 2:
        printf("���ڶ�\n");
        break;
        case 3:
        printf("������\n");
        break;
        case 4:
        printf("������\n");
        break;
        case 5:
        printf("������\n");
        break;
        case 6:
        printf("������\n");
        break;
        case 7:
        printf("������\n");
        break;
        default:
        printf("������Ҳ��ǰɣ���\n");
        break;
        }
    //     switch (day)
    // {
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //     printf("��Ϣ��\n");
    //     break;
    //     case 6:
    //     case 7:
    //     printf("������\n");
    //     break;
    // default:
    // printf("������Ҳ��ǰɣ���\n");
    // }
    // return 0;
}