#include<stdio.h>
int main(){
    int a = 20;
    int* p = &a;
    printf("��ַ��%p\n",&a);
    printf("��ַ��%p\n",p);
    *p = 10;
    printf("%d\n",a);
    return 0;
}