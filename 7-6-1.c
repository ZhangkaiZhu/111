#include<stdio.h>
int main()
{
    int i,money=0,total=0;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&money);
        total += money;
        if(total>100000)
            break;
    }
    printf("this is custormer number %d\n",i);
    return 0;
}
