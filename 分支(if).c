#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a<18)
    {printf("未成年\n");
    printf("不要谈恋爱");
    }
    else if (a>=18&&a<28)
    printf("青年\n");
    else if (a>=28&&a<50)
    printf("壮年\n");
    else if (a>=50&&a<90)
    printf("老年\n");
    else
    printf("老不死\n");
    return 0;
}