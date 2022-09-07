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
    
    printf("请输入要录入的学生人数:\n");//录入成绩
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("输入名字:\n");
        scanf("%s",a[i].name);
        printf("输入语文成绩:\n");
        scanf("%d",&a[i].chinese);
        printf("输入数学成绩:\n");
        scanf("%d",&a[i].math);
        a[i].total = a[i].chinese + a[i].math;
        system("cls");
        if(num-i-1>0)
        {
        printf("已经录入%d位还须录入%d位\n",i+1,num-i-1);
        }
        else
        printf("录入完成\n");
    }
    printf("是否要对总分进行排序?(Y/N)\n");
    scanf("%s",ch);
    if(strcmp(ch,"Y")==0)//冒泡排序成绩
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
                    a[j+1].total = tmp;//分数交换
                    strcpy(b.name1,a[j].name);
                    strcpy(a[j].name,a[j+1].name);
                    strcpy(a[j+1].name,b.name1);//名字交换
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
    for(i=0;i<num;i++)//按成绩排名
    {
        printf("第%d名:\n姓名:%s\n总分:%d\n",i+1,a[i].name,a[i].total);
    }
    lookatme:
    printf("一切都结束了");
    return 0;
}