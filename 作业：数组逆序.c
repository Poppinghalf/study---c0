#include<stdio.h>


void nixu(int arr[],int sz)
{
    int left = 0;
    int right = sz-1;
    while(left<=right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
        if(left>right)
        {
            break;
        }
    }
}


void Print(int arr[],int sz)
{
    int i;
    for(i = 0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}



void chushihua(int arr[],int sz)
{
    int i;
    for(i = 0;i<sz;i++)
    {
        arr[i] = 0;
    }
};


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    // chushihua(arr,sz);//��ʼ��ȫԪ��Ϊ0
    Print(arr,sz);
    nixu(arr,sz);//����
    Print(arr,sz);
    return 0;
}