#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define hang 3
#define lie 3

int qq(char board[hang][lie],int x,int y)//判断是否平局
{
    int i;
    int j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(board[i][j] == ' ')
            return 0;
        }
    }
    return 1;
}

int iswin(char board[hang][lie],int x,int y)//O人赢，X电脑赢，Q平局，C继续
{
    int i;
    for(i=0;i<x;i++)//横三行
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1] != ' ')
    {
        return board[i][1];
    }
    }
    for(i=0;i<lie;i++)//竖三列
    {
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1] != ' ')//对角线1
    {
        return board[1][1];
    }
    if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1] != ' ')//对角线2
    {
        return board[1][1];
    }
    if(1 == qq(board,x,y))//判断是否平局
    {
        return 'Q';
    }
    return 'C';//继续
}


void computermove(char board[hang][lie],int x,int y)//电脑走
{
    while(1)
    {
        int i = rand()%x;
        int j = rand()%y;
        if(board[i][j] == ' ')
        {
            board[i][j] = 'X';
            break;
        }
    }
}


void playermove(char board[hang][lie],int x,int y)//人走
{
    printf("玩家走\n");
    while(1)
    {
        int i,j;
        printf("请输入行数m和列数n\n");
        scanf("%d%d",&i,&j);
        if(i>x||j>y||i<1||j<1)
        {
            printf("你要下到哪里去？？\n");
            continue;
        }
        if(board[i-1][j-1] == ' ')
        {
            board[i-1][j-1] = 'O';
            break;
        }
        else
        {
            printf("该坐标被占用\n");
        }
    }
}


void chushihua(char board[hang][lie],int x,int y)//初始化棋盘为全空
{
    int i;
    for(i = 0;i<x;i++)
    {
        int j;
        for(j = 0;j<y;j++)
        {
            board[i][j] = ' ';
        }
    }
}


void dayin(char arr[hang][lie],int x,int y)//打印棋盘
{
    int i;
    for(i = 0;i<x;i++)
    {
        int j;
        for(j = 0;j<y;j++)
        {
            printf(" %c ",arr[i][j]);
            if(j<y-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i<x-1)
        {
            int z;
            for(z = 0;z<y;z++)
            {
                printf("---");
                if(z<y-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}


void game()//游戏主体
{
    char board[hang][lie];
    int ret;//用于接收iswin的值
    chushihua(board,hang,lie);//初始化棋盘
    dayin(board,hang,lie);//打印棋盘
    //开始下棋
    while(1)//走棋过程
    {
    playermove(board,hang,lie);//玩家走
    system("cls");
    dayin(board,hang,lie);
    ret = iswin(board,hang,lie);//判断玩家是否赢
    if(ret != 'C')
    {
        break;
    }
    computermove(board,hang,lie);
    system("cls");
    dayin(board,hang,lie);
    ret = iswin(board,hang,lie);//判断电脑是否赢
    if(ret != 'C')
    {
        break;
    }
    }
    if(ret == 'O')
    {
        printf("哎呦,不错哦\n");
    }
    else if(ret == 'X')
    {
        printf("别玩了,滚去学习\n");
    }
    else
    {
        printf("平局\n");
    }
}


void menu()//菜单
{
    printf("***************************************\n");
    printf("****1.浅玩一把   0.不玩，没空**********\n");
    printf("***************************************\n");
}



void test()//询问是否开始游戏
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {   
        menu();   
        printf("就问你玩不玩吧\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                system("cls");
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                system("cls");
                printf("你小子故意找茬是吧\n");
                break;
        }
    }
        while(input);
    
}


int main()//主程序
{
    test();
    return 0;

}