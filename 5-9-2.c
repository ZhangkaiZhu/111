#include<stdio.h>
int main()
{
    char str[9]={'S','h','i','Y','a','n','L','o','u'};
    for(int i=0;i<9;i++)
        str[i] +=1;
    for(int i=0;i<9;i++)
        printf("%c",str[i]);
    printf("\n");
    for(int i=0;i<9;i++)
        putchar(str[i]);
    return 0;
}
