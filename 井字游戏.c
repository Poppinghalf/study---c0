#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define hang 3
#define lie 3

int qq(char board[hang][lie],int x,int y)//�ж��Ƿ�ƽ��
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

int iswin(char board[hang][lie],int x,int y)//O��Ӯ��X����Ӯ��Qƽ�֣�C����
{
    int i;
    for(i=0;i<x;i++)//������
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1] != ' ')
    {
        return board[i][1];
    }
    }
    for(i=0;i<lie;i++)//������
    {
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1] != ' ')//�Խ���1
    {
        return board[1][1];
    }
    if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1] != ' ')//�Խ���2
    {
        return board[1][1];
    }
    if(1 == qq(board,x,y))//�ж��Ƿ�ƽ��
    {
        return 'Q';
    }
    return 'C';//����
}


void computermove(char board[hang][lie],int x,int y)//������
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


void playermove(char board[hang][lie],int x,int y)//����
{
    printf("�����\n");
    while(1)
    {
        int i,j;
        printf("����������m������n\n");
        scanf("%d%d",&i,&j);
        if(i>x||j>y||i<1||j<1)
        {
            printf("��Ҫ�µ�����ȥ����\n");
            continue;
        }
        if(board[i-1][j-1] == ' ')
        {
            board[i-1][j-1] = 'O';
            break;
        }
        else
        {
            printf("�����걻ռ��\n");
        }
    }
}


void chushihua(char board[hang][lie],int x,int y)//��ʼ������Ϊȫ��
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


void dayin(char arr[hang][lie],int x,int y)//��ӡ����
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


void game()//��Ϸ����
{
    char board[hang][lie];
    int ret;//���ڽ���iswin��ֵ
    chushihua(board,hang,lie);//��ʼ������
    dayin(board,hang,lie);//��ӡ����
    //��ʼ����
    while(1)//�������
    {
    playermove(board,hang,lie);//�����
    system("cls");
    dayin(board,hang,lie);
    ret = iswin(board,hang,lie);//�ж�����Ƿ�Ӯ
    if(ret != 'C')
    {
        break;
    }
    computermove(board,hang,lie);
    system("cls");
    dayin(board,hang,lie);
    ret = iswin(board,hang,lie);//�жϵ����Ƿ�Ӯ
    if(ret != 'C')
    {
        break;
    }
    }
    if(ret == 'O')
    {
        printf("����,����Ŷ\n");
    }
    else if(ret == 'X')
    {
        printf("������,��ȥѧϰ\n");
    }
    else
    {
        printf("ƽ��\n");
    }
}


void menu()//�˵�
{
    printf("***************************************\n");
    printf("****1.ǳ��һ��   0.���棬û��**********\n");
    printf("***************************************\n");
}



void test()//ѯ���Ƿ�ʼ��Ϸ
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {   
        menu();   
        printf("�������治���\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                system("cls");
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                system("cls");
                printf("��С�ӹ����Ҳ��ǰ�\n");
                break;
        }
    }
        while(input);
    
}


int main()//������
{
    test();
    return 0;

}