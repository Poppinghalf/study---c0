#include<stdio.h>
#include<string.h>
struct  people{
    char name[20];//名字
    short age;//年龄
    int height;//身高
    long long codenumber;//学号
};
int main(){
    struct people a1 = {"王德发",18,180,666666};
    struct people* pb = &a1;
    printf("名字:%s\n",pb->name);
    strcpy(pb->name,"王尼玛");
    printf("改名:%s\n",pb->name);
    printf("年龄:%d岁\n",pb->age);
    printf("身高%dcm\n",pb->height);
    printf("学号:%d\n",pb->codenumber);
    return 0;
}
// int main()
// {
//     struct people a1 = {"王德发",18,180,666666};
//     printf("名字:%s\n",a1.name);
//     strcpy(a1.name,"王尼玛");
//     printf("改名:%s\n",a1.name);
//     printf("年龄:%d\n",a1.age);
//     printf("身高:%d\n",a1.height);
//     printf("学号:%d\n",a1.codenumber);
//     return 0;
// }