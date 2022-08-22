#include<stdio.h>
Max(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}
int main(){
    int num1;
    int num2;
    int max;
    scanf("%d%d",&num1,&num2);
    max = Max(num1,num2);
    printf("max=%d\n",max);
    return 0;
}