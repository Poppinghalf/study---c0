#include<stdio.h>
#include<windows.h>
#include<string.h>


struct bitch
{
    char name1[20];
};


struct student
{
    char name[20];
    int  chinese,math;
    int total;
};


int main()
{
    char ch[1];
    int i;
    int num;
    struct bitch b;
    struct student a[100];
    
    printf("������Ҫ¼���ѧ������:\n");//¼��ɼ�
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("��������:\n");
        scanf("%s",a[i].name);
        printf("�������ĳɼ�:\n");
        scanf("%d",&a[i].chinese);
        printf("������ѧ�ɼ�:\n");
        scanf("%d",&a[i].math);
        a[i].total = a[i].chinese + a[i].math;
        system("cls");
        if(num-i-1>0)
        {
        printf("�Ѿ�¼��%dλ����¼��%dλ\n",i+1,num-i-1);
        }
        else
        printf("¼�����\n");
    }
    printf("�Ƿ�Ҫ���ֽܷ�������?(Y/N)\n");
    scanf("%s",ch);
    if(strcmp(ch,"Y")==0)//ð������ɼ�
    {
        for(i=0;i<num-1;i++)
        {
            int flag = 1;
            int j;
            for(j=0;j<num-1-i;j++)
            {
                
                if(a[j].total<a[j+1].total)
                {
                    int tmp = a[j].total;
                    a[j].total = a[j+1].total;
                    a[j+1].total = tmp;//��������
                    strcpy(b.name1,a[j].name);
                    strcpy(a[j].name,a[j+1].name);
                    strcpy(a[j+1].name,b.name1);//���ֽ���
                    flag = 0;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
    }
    else
    {
        goto lookatme;
    }
    for(i=0;i<num;i++)//���ɼ�����
    {
        printf("��%d��:\n����:%s\n�ܷ�:%d\n",i+1,a[i].name,a[i].total);
    }
    lookatme:
    printf("һ�ж�������");
    return 0;
}