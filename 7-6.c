#include<stdio.h>
int main()
{
    int a;
    for(a=100;a<=200;a++)
    {
        if(a%3==0)
            continue;
        printf("%d\t",a);
    }
    printf("\n");
    return 0;
}
