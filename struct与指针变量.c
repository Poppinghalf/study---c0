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
    printf("���䣺%d��\n",pb->age);
    printf("���%dcm\n",pb->height);
    printf("ѧ�ţ�%d\n",pb->codenumber);
    return 0;

}