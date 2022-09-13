#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
char arr1[]={"hello world!!!"};
char arr2[]={"              "};
int left = 0;
int end = strlen(arr2)-1;
while(left<end)
{
    arr2[left] = arr1[left];
    left++;
    Sleep(30);
    system("cls");
    printf("%s",arr2);
}
return 0;
}