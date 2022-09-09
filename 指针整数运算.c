#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int* p = arr;
    for(i=0;i<10;i++)
    {
        printf("%d ",*p);
        p++;
    }
    // for(i=0;i<5;i++)
    // {
    //     printf("%d ",*p);
    //     p+=2;
    // }
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int* p = &arr[9];
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",*p);
//         p-=2;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     int* p = arr;
//     int i;
//     for(i = 0;i < 10;i++)
//     {
//         printf("%p == %p\n",p+i,&arr[i]);
//     }
//     // for(i = 0;i<10;i++)
//     // {
//     //     *(p+i) = i;
//     //     printf("%d ",arr[i]);
//     // }
//     return 0;
// }