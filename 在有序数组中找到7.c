#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int k = 7;
    int a;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(a=0;a<sz;a++)
    {
        if(k == arr[a])
        {
            printf("�ҵ��ˣ��±��ǣ�\n%d",a);
            break;
        }

    }
    if(a==sz)
    printf("�Ҳ���");
    return 0;
}
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
