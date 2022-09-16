#include<stdio.h>
int main()
{
    int arr[6][5]={{1,2,2,1,2},{5,6,7,8,3},{9,3,0,5,3},{7,2,1,4,6},{3,0,8,2,4},{1,5}}; 
    int n,m;
    int i;
    printf("原先的数组为:\n");
    for(i=0;i<6;i++)
    {
        int j;
        for(j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("请输入要交换的行数\n");
    scanf("%d%d",&n,&m);
    int x;
    for(x=0;x<5;x++)
    {
        int tmp = arr[n-1][x];
        arr[n-1][x] = arr[m-1][x];
        arr[m-1][x] = tmp;
    }
    printf("现在的数组为:\n");
        for(i=0;i<6;i++)
    {
        int j;
        for(j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}