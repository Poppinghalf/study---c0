#include<stdio.h>



int nk(int n,int k)
{        
    if(k>1)
    {
        return n*nk(n,k-1);
    }
    else if(k == 0)
    {
        return 1;
    }
    else
    {
        return n;
    }
}



int main()
{
    int n;
    int k;
    printf("������n��k�η�\n");
    scanf("%d%d",&n,&k);
    printf("%d",nk(n,k));
    return 0;
}