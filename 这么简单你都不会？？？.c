#include<stdio.h>
#include<stdlib.h>


typedef struct add
{
    int a;
    int b;
    int c;
}add;


typedef struct jian
{
    int c;
    int d;
    int e;
}jian;


int main()
{
    add add[100];
    jian jian[100];
    int i;
    int j;
    int x;
    int y;
    for(i = 0;i<100;i++)
    {
        printf("输入A和B\n");
        scanf("%d%d",&add[i].a,&add[i].b);
        add[i].c = add[i].a+add[i].b;
        system("cls");
        if(add[i].a == 0&&add[i].b == 0)
        {
            break;
        }
    }
    for(j = 0;j<=i;j++)
    {
        printf("输入C和D\n");
        scanf("%d%d",&jian[j].c,&jian[j].d);
        jian[j].e = jian[j].c - jian[j].d;
        system("cls");
        if(jian[j].c == 0&&jian[j].d == 0)
        {
            break;
        }
    }
    for(x = 0;x<i;x++)
    {
        printf("%d\n",add[x].c);
    }
    for(y = 0;y<j;y++)
    {
        printf("%d\n",jian[y].e);
    }
    return 0;
}