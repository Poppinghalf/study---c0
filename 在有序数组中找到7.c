#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf("Ԫ�ظ�����%d\n",sz);
    int left = 0;
    int right = sz-1;
    int mid;
    while(left<=right)
    {
    mid = (left+right)/2;
        if(arr[mid] > k)
    {
        right = mid-1;
    }
    else if(arr[mid] < k)
    {
        left = mid+1;
    }
    else
    {
        printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
    break;   
    }
    }
    if(left>right)
    printf("�Ҳ���\n");
return 0;
}

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9};
//     int k = 7;
//     int a;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     for(a=0;a<sz;a++)
//     {
//         if(k == arr[a])
//         {
//             printf("�ҵ��ˣ��±��ǣ�\n%d",a);
//             break;
//         }

//     }
//     if(a==sz)
//     printf("�Ҳ���");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     int k = 7;
//     int arr[]={1,2,3,4,5,6,7,8,9,};
//     for(a=0;k!=arr[a];a++)
//     {
//     }
//     printf("�ҵ��ˣ��±��ǣ�\n%d",a);
//     return 0;
// }