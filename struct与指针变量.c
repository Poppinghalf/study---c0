#include<stdio.h>
#include<string.h>
struct  people{
    char name[20];//����
    short age;//����
    int height;//���
    long long codenumber;//ѧ��
};
int main(){
    struct people a1 = {"���·�",18,180,666666};
    struct people* pb = &a1;
    printf("����:%s\n",pb->name);
    strcpy(pb->name,"������");
    printf("����:%s\n",pb->name);
    printf("����:%d��\n",pb->age);
    printf("���%dcm\n",pb->height);
    printf("ѧ��:%d\n",pb->codenumber);
    return 0;
}
// int main()
// {
//     struct people a1 = {"���·�",18,180,666666};
//     printf("����:%s\n",a1.name);
//     strcpy(a1.name,"������");
//     printf("����:%s\n",a1.name);
//     printf("����:%d\n",a1.age);
//     printf("���:%d\n",a1.height);
//     printf("ѧ��:%d\n",a1.codenumber);
//     return 0;
// }