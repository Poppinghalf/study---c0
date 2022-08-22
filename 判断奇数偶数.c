#include<stdio.h>
int main(){
    int a;
    int num;
    printf("请输入数字:\n");
    scanf("%d",&a);
    num = a%2;
    if(num == 1)
    printf("这个数字是奇数");
    else
    printf("这个数是偶数");
    return 0;
}