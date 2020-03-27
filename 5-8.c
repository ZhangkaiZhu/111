#include<stdio.h>
int main()
{
    char c;
    printf("Input an uppercase letter:\n");
    c=getchar();
    putchar(c+32);
    return 0;
}
