#include<stdio.h>
#define MAX(x,y){x>y?x:y}
#define Add(x,y){x+y}
int main(){
    int a = 10;
    int b = 20;
    int max = MAX(a,b);
    int add = Add(a,b);
    printf("�ϴ�ֵΪ��%d\n",max);
    printf("��Ϊ��%d\n",add);
    return 0;
}