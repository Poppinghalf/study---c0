#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<=sz;i++)
    {
        printf("arr[%d] = %p\n",i,arr[i]);
    }//�������ڴ�����������ŵģ����Ҵӵ͵�ַ���ߵ�ַ
    return 0;
}