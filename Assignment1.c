#include <stdio.h>

//Q1
/*void main()
{
    int a;
    float b;
    char c;
    printf("Enter an integer, float number and a charachter: ");
    scanf("%d\n %f\n %c", &a, &b, &c);
    printf("Integer entered : %d\nDecimal number entered : %f\nCharachter entered : %c", a,b,c);
    return;
}
*/

//Q3
/*void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d\n%d", &a, &b);
    printf("Numbers entered: %d & %d", a,b);
    //Arithmatic Operators :-
    int sum = a+b;
    printf("\nSum of the numbers: %d", sum);

    int diff = a-b;
    printf("\nDifference in the numbers (first-second) : %d", diff);

    int prod = a*b;
    printf("\nProduct of multiplication of the numbers: %d", prod);
    
    double quotient = a/(float)b; //Typecasting of b is done here to give the full quotient in the output, as without it, decimals in the quotient were omitted because both a and b were int datatypes.
    printf("\nQuotient of division of the numbers: %f", quotient);

    int rem = a%b;
    printf("\nRemainder of division of the numbers: %d", rem);
}
*/

//Q4.1
/*void main()
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
*/

//Q4.2
/*void main()
{
    int a = 0;

    while (a<=10)
    {
        printf("%d\n", a);
        a++;
    }
    printf("This is the end.....");
}
*/

//Q4.3
/*void main()
{
    int a = 20;
    do
    {
        a--;
        printf("%d\n", a);
    } while (a>=10);

    printf("This is the end....");
}
*/

//Q4.4
/*void main()
{
    int b = 0;
    printf("Value of b = %d\n", b);
    for (int i = 0; i < 10; i++)
    {
        b+=i;
        printf("%d", b);
    }
    printf("Summation of numbers till 10 is %d", b);
    printf("This is the end.....");
    
}
*/

//Q2
void main()
{
    int a = 3248;
    float b = 2323.232;
    short int c = 25;
    long int d = 20914765;
    long long int e = 58457946259748418;
    double f = 1.68466848;
    long double g = 1.09942187;
    char ch = 't';

    printf("Size of integer datatype is %d bytes\n", sizeof(a));
    printf("Size of float datatype is %d bytes\n", sizeof(b));
    printf("Size of short integer datatype is %d bytes\n", sizeof(c));
    printf("Size of long integer datatype is %d bytes\n", sizeof(d));
    printf("Size of long long integer datatype is %d bytes\n", sizeof(e));
    printf("Size of double datatype is %d bytes\n", sizeof(f));
    printf("Size of long double datatype is %d bytes\n", sizeof(g));
    printf("Size of character datatype is %d bytes\n", sizeof(ch));
    printf("\n");

    printf("Data Type\tVariable\tValue assigned\n");
    printf("integer  \ta\t%d\n", a);
    printf("float  \tb\t%f\n", b);
    printf("short integer\tc\t%hd\n", c);
    printf("long integer\td\t%ld\n", d);
    printf("long long integer\te\t%lld\n", e);
    printf("double  \tf\t%lf\n", f);
    printf("long double\tg\t%Lf\n", g);
    printf("character\th\t%c", ch);
}

/*void main()
{
    char grade;
    printf("Enter your Grade (A/B/C/D/E/F):");
    scanf("%c", &grade);
    printf("Grade : %c\n", grade);

    switch (grade)
    {
    case 'A': printf("Outstanding");
        break;

    case 'B': printf("Very Good");
        break;

    case 'C': printf("Good");
        break;

    case 'D': printf("Can do Better");
        break;

    case 'E': printf("Work Hard");
        break;
    
    case 'F': printf("Fail");
        break;
    
    default: printf("Please enter the correct grade");
        break;
    }
}
*/