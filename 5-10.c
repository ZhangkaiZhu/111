#include<stdio.h>
int main()
{
    double r,h,c,s,v,pi;
    pi=3.1415926;
    printf("Please enter the bottom radius:\n");
    scanf("%lf",&r);
    printf("Please enter the tall:\n");
    scanf("%lf",&h);
    c=2*pi*r;
    s=pi*r*r;
    v=s*h;
    printf("The bottom permeter %.2f ",c);
    printf("The bottom area %.2f ",s);
    printf("The volume %.2f ",v);
    return 0;
}
