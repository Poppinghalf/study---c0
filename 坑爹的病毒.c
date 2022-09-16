#include<stdio.h>
int main()
{
    int arr[]={5,9,8,7,6,0,4,3,2,1};
    int i;
    for(i = 0;i<101;i++)
    {
        if(i<10)
        {
            printf("%d ",arr[i]);
        }
        else if(i>=10&&i<100)
        {
            printf("%d%d ",arr[i/10],arr[i%10]);
        }
        else
        {
            printf("955\n");
        }
    }
    return 0;
}