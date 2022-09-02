#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<=sz;i++)
    {
        printf("arr[%d] = %p\n",i,arr[i]);
    }//数组在内存中是连续存放的，并且从低地址到高地址
    return 0;
}