#include<stdio.h>
int main()
{
    int a=1;
    int b=0;
    int c=0;
    while(a<=100)
    {
        c=c+a;
        a=a+1;
    }
    printf("=%d\n",c);
    return 0;
}
