#include<stdio.h>


char arr[] = {1,2,3,4,5,6,7,8,9,10};


int search(int x)
{
    int left  =  0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int right = sz-1;

while(left<=right)
{   
    int mid = (left+right)/2;
    if(arr[mid] < x)
    {
        left = mid+1;
    }
    else if(arr[mid] > x)
    {
        right = mid-1;
    }
    else
    {
        return mid;
    }
}
if(left>right)
{
    return -1;
}
}


int main()
{
    int n;
    printf("������1-10������\n");
    scanf("%d",&n);
    int ret = search(n);
    if(search(n)==-1)
    {
        printf("�Ҳ���\n");
    }
    else
    {
    printf("�ҵ��ˣ��±���%d",ret);
    }
    return 0;
}