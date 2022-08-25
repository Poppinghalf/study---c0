#include<stdio.h>
int main(){
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    int bb;
    printf("«Î ‰»În\n");
    scanf("%d",&bb);
for(n =1;n<=bb;n++)
{ 
    ret = 1;
    for(i=1;i<=n;i++)
    {
       ret = ret *  i;
    }

    sum = sum+ret;
}
    printf("%d",sum);
    return 0;
}