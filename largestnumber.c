#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d\t%d\t%d", &a, &b, &c);
    printf("Three numbers entered: %d %d %d\n", a,b,c);
    if (a>b && a>c)
    {
        printf("%d is the largest number", a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest number", b);
    }
    else
    {
        printf("%d is the largest number", c);
    }
}