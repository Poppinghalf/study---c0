#include<stdio.h>
int main()
{
    int a = 0;
    int* pa = &a;
    char* pc = &a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);//int* ��4���ֽ�
    printf("%p\n",pc);
    printf("%p\n",pc+1);//char*��1���ֽ�
    return 0;
}