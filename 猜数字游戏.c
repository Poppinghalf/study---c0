#include<stdio.h>
#include<time.h>


void menu()
{
    printf("************************************************\n");
    printf("******* 1.ǳ��һ��   2. ������,����û��  *******\n");
    printf("************************************************\n");
}


void game()
{
    int ret = 0;
    int ccc;
    ret = rand()%100+1;//1-100�����
    scanf("%d",&ccc);
    while(1)
    {
    if(ccc > ret)
    {                       
        printf("̫����\n");
        scanf("%d",&ccc);
    }
    else if(ccc < ret)
    {
        printf("�󵨵㣬�����˲�\n");
        scanf("%d",&ccc);
    }
    else
    {
        printf("���ϲ���Ŷ\n");
        break;
    }
    }
}



int main()
{
    int input;
    srand((unsigned int)time(NULL));//ʱ���ᣬ��������
    do
    {   
        
        menu();
        printf("�������治���\n");
        scanf("%d",&input);
        if(input == 1) 
        {

            printf("������1-100������\n");
            game();
        }
        else if(input == 2)
        {
            printf("�˳���Ϸ\n");
            break;
        }
        else
        {
            printf("��С�ӹ����Ҳ��ǰɣ�����\n");
        }
    }
    while(1);
return 0;
}