#include<stdio.h>
#define PI 3.14159
int main()
{
    float r;
    scanf("%f",&r);
    int h;
    scanf("%d",&h);
    float area,cir,vol;
    cir=PI*r*2;
    area=PI*r*r;
    vol=area*h;
    printf("cir=%.2f,area=%.2f,vol=%.2f",cir,area,vol);
    return 0;
}
