#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int i;
        int arr[100];
        int  max = 0;
        for(i = 0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i] != 33&&max<arr[i])
            {
            max =  arr[i];
            }
        }
            printf("%d\n",max);
    }
    return 0;
}