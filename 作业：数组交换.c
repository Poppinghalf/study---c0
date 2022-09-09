#include<stdio.h>


void Print(int arr[],int sz)
{
    int i;
    for(i = 0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main()
{
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10};
    int i;
    int sz = sizeof(arr1)/sizeof(arr1[0]);
    printf("第一组为：\n");
    Print(arr1,sz);
    printf("第二组为：\n");
    Print(arr2,sz);
    for(i = 0;i<sz;i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    printf("第一组为：\n");
    Print(arr1,sz);
    printf("第二组为：\n");
    Print(arr2,sz);
    return 0;
}