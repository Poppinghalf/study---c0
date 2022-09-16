#include<stdio.h>

typedef struct fuck_bitch
{
    char name[20];
    int age;
    char sex[5];
}fuck_bitch;


int main()
{
    fuck_bitch a1 = {"hhhh",20,"man"};
    printf("%s",a1.name);
    return 0;
}