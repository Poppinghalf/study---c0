#include<stdio.h>
int main()
{
    int arr[5][6] = {{1,2,3,4,5,6},{7,8,},{9,10,11}};//1 2 3 4 5 6
                                                    //7 8
                                                    //9 10 11
    int i;
    int c;
    for(i = 0;i<5;i++)
    {
        int j;
        for(j = 0;j<6;j++)
        {
            if(arr[i][j] == 11)
            {
                printf("找到了，下标是[%d][%d]",i,j);
                c = 1;
            }
        } 
        if(c == 1)
        {
            break;
        }
    }
    if(i == 5)
    {
        printf("找不到\n");
    }
    return 0;
}