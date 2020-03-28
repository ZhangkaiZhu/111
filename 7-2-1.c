#include<stdio.h>
int main()
{
    int a=1,sum=0;
    do
    {
        sum=sum+a;
        a++;
    }
    while(a<=100);
    printf("sum=%d\n",sum);
    return 0;
}
