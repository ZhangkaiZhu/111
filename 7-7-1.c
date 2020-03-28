#include<stdio.h>
int main()
{
    int a,b,c,d;
    for(a=1;a<=5;a++)
        printf("%d\t",a);
    printf("\n");
    for(b=1;b<=5;b++)
        b=b*2;
        printf("%d\t",b);
    printf("\n");
    for(c=1;c<=5;c++)
        c=c*3;
        printf("%d\t",c);
    printf("\n");
    for(d=1;d<=5;d++)
        d=d*4;
        printf("%d\t",d);
    printf("\n");
    return 0;
}
