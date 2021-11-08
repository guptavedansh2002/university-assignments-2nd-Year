#include<stdio.h>

int add();
int main()
{
    int a, b;
    printf("Enter 2 numbers to add:\n");
    scanf("%d\n%d", &a, &b);
    add(a,b);
    return 0;
}

int add(int x, int y)
{
    int c = x+y;
    printf("The sum is %d", c);
}