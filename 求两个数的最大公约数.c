#include<stdio.h>
int main()
{
    int a,b;
    printf("ÇëÊäÈëÊı×Ö\n");
    scanf("%d%d",&a,&b);
    while(a%b != 0)
    {
        int c = a%b;
        a =b;
        b =c;
    }
    if(a%b == 0)
    {
        printf("%d\n",b);
    }
    return 0;
}