#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int i =0;
    int max = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        if(arr[i]>max);
        max = arr[i];
    }
    printf("%d",max);
    return 0;
}