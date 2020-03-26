#include<stdio.h>
int main()
{
    int speed=40;
    double time=1.5;
    double len;
    len=speed*time;
    printf("小明家与公司的距离是%.2f公里\n",len);    //.2保留2位小数
    return 0;
}
