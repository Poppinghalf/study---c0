#include<stdio.h>
#include<string.h>
int main()
{
    char n;
    char arr[] = {"abcdef"};
    int left = 0;
    int right = strlen(arr)-1;
    printf("%s\n",arr);
    while(left<right)
    {
        n = arr[left];
        arr[left] = arr[right];
        arr[right] = n;
        left++;
        right--;
    }
    printf("%s\n",arr);
    return 0;
}


// //ตÝน้
// #include<stdio.h>


// int my_strlen(char* str)
// {
//     int count = 0;
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }


// void nixu(char arr[])
// {
//     char tmp = arr[0];
//     int len = my_strlen(arr);
//     arr[0] = arr[len-1];
//     arr[len-1] = '\0';
//     if(my_strlen(arr+1)>=2)
//     {
//         nixu(arr+1);
//     }
//     arr[len-1] = tmp;
// }


// int main()
// {
//     char arr[] = {"abcdef"};
//     printf("%s\n",arr);
//     nixu(arr);
//     printf("%s\n",arr);
//     return 0;
// }