#include<stdio.h>

void fuck(int* arr,int sz)
{
    int i;
    for(i = 0;i<sz-1;i++)//确认趟数
    {
        int flag = 1;
        int j;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])//比较大小
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0;//本趟不完全排序
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
}


int main()
{
    int arr[10]={6,9,66,4,88,68,7,52,9,10};
    int i;
    int sz = sizeof(arr)/sizeof(arr[0]);
    fuck(arr,sz);
    printf("结果如下\n");
    for(i = 0;i <sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}