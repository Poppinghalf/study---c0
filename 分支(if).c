#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a<18)
    {printf("δ����\n");
    printf("��Ҫ̸����");
    }
    else if (a>=18&&a<28)
    printf("����\n");
    else if (a>=28&&a<50)
    printf("׳��\n");
    else if (a>=50&&a<90)
    printf("����\n");
    else
    printf("�ϲ���\n");
    return 0;
}