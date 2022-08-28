#include<stdio.h>
#include<time.h>


void menu()
{
    printf("************************************************\n");
    printf("******* 1.浅玩一把   2. 玩尼玛,劳资没空  *******\n");
    printf("************************************************\n");
}


void game()
{
    int ret = 0;
    int ccc;
    ret = rand()%100+1;//1-100随机数
    scanf("%d",&ccc);
    while(1)
    {
    if(ccc > ret)
    {                       
        printf("太大辣\n");
        scanf("%d",&ccc);
    }
    else if(ccc < ret)
    {
        printf("大胆点，往大了猜\n");
        scanf("%d",&ccc);
    }
    else
    {
        printf("哎呦不错哦\n");
        break;
    }
    }
}



int main()
{
    int input;
    srand((unsigned int)time(NULL));//时间轴，随机数起点
    do
    {   
        
        menu();
        printf("就问你玩不玩吧\n");
        scanf("%d",&input);
        if(input == 1) 
        {

            printf("请输入1-100的数字\n");
            game();
        }
        else if(input == 2)
        {
            printf("退出游戏\n");
            break;
        }
        else
        {
            printf("你小子故意找茬是吧！！！\n");
        }
    }
    while(1);
return 0;
}