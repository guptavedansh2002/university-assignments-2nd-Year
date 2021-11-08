#include<stdio.h> //stdio - standard input output 
#include<conio.h> //conio - console input output

void main()
{
    int a;
    float f;
    char c;
    printf("Enter one charachter, integer, float number:");
    scanf("%c %d %f", &c, &a, &f);
    printf("Charachter entered: %c\n", c);
    printf("a has value %d\n",a);
    printf("f has value %f",f);
    return;
}
