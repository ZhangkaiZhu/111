#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("Please enter i:");
    scanf("%d",&i);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=100);
    printf("sum=%d\n",sum);
    return 0;
}
