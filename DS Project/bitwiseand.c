//Program to perform AND operation
//Abbrebiations - LSB = Least Significant Bit, MSB = Most Significant Bit
#include <stdio.h>
#include <math.h>

int main()
{
    //Initialization of Variables
    float a, b;       //Variable for the User-Entered Number
    float dec1, dec2; //Decimal part of number
    int num1, num2, inpin1[100] = {0}, inpin2[100] = {0}, inpdec1[100] = {0}, inpdec2[100] = {0}, outin[100] = {0}, outdec[100] = {0}, i = 0, j = 0;
    int n1 = 0, n2 = 0, c1 = 0, c2 = 0, count = 0;
    float newnum = 0;

    printf("Enter the two numbers on which AND operation needs to be used\n");
    printf("First Number: ");
    scanf("%f", &a);
    printf("Second Number: ");
    scanf("%f", &b);

    num1 = a;        //Type Casting a to get integral part as we are assigning 'int' var a 'float' value, and thus the var will only take the integer part.
    dec1 = a - num1; //Aquiring the decimal part of a

    num2 = b; //Applying the same with b
    dec2 = b - num2;

    //First Number being converted to Binary and printed..
    //Converting the Integer part of 1st number into Binary
    while (num1 != 0)
    {
        n1 = num1 % 2;
        num1 = num1 / 2;
        inpin1[i] = n1;
        c1 = c1 + 1;
        i++;
    }
    //Converting the Decimal part of 1st number into Binary
    for (j = 0; j <= 9; j++)
    {
        dec1 = dec1 * 2;
        n1 = dec1;
        inpdec1[j] = n1;
        if (n1 == 1)
        {
            dec1 = dec1 - 1;
        }
    }
    //Printing the first number in Binary.
    printf("%f in Binary Code is ", a);
    for (i = c1 - 1; i >= 0; i--) //Bits will be printed from reverse of array here for integer.
    {
        printf("%d", inpin1[i]);
    }
    printf(".");
    for (j = 0; j <= 9; j++)
    {
        printf("%d", inpdec1[j]);
    }

    //Second Number being converted to Binary and printed.
    //Converting the Integer part of 2nd number into Binary.
    i = 0;
    while (num2 != 0)
    {
        n2 = num2 % 2;
        num2 = num2 / 2;
        inpin2[i] = n2;
        c2 = c2 + 1;
        i++;
    }
    //Converting the Decimal part of 2nd number into Binary. Here we have kept a limit of convertion to 10 decimal places.
    for (j = 0; j <= 9; j++)
    {
        dec2 = dec2 * 2;
        n2 = dec2;
        inpdec2[j] = n2;
        if (n2 == 1)
        {
            dec2 = dec2 - 1;
        }
    }
    //Printing the second number in Binary.
    printf("\n%f in Binary Code is ", b);
    for (i = c2 - 1; i >= 0; i--)
    {
        printf("%d", inpin2[i]);
    }
    printf(".");
    for (j = 0; j <= 9; j++)
    {
        printf("%d", inpdec2[j]);
    }

    //Using AND operation to the binary codes of the two numbers entered by the user.
    //Setting the final count to iterate through the two arrays cause of different count of elements in the two integer arrays. For example, if inpin1 had total 9 valuable elements which are needed to compute AND and inpin2 had 11. This causes a difference in number of iterations required in total to perform AND, and might ignore the 3 more binary in inpin2. Thus final count is set as 11 and the 3 extra binary in inpin1 is already set to 0 which will contribute to calculating the AND.
    count = (c1 > c2) ? c1 : c2;
    //AND operation is performed here on every binary by iterting through the arrays and final result of each binary is stored in the array 'outin' for integral part of final number and 'outdec' for the decimal part of final number.
    for (i = 0; i < count; i++)
    {
        outin[i] = inpin1[i] & inpin2[i];
    }
    for (j = 0; j <= 9; j++)
    {
        outdec[j] = inpdec1[j] & inpdec2[j];
    }
    //Now we have got the binary values of the final number seperted in 2 arrays and to be printed in one sentence.
    printf("\n%f AND %f = ", a, b);
    for (i = c1 - 1; i >= 0; i--)
    {
        printf("%d", inpin1[i]);
    }
    printf(".");
    for (j = 0; j <= 9; j++)
    {
        printf("%d", inpdec1[j]);
    }
    printf(" & ");
    for (i = c2 - 1; i >= 0; i--)
    {
        printf("%d", inpin2[i]);
    }
    printf(".");
    for (j = 0; j <= 9; j++)
    {
        printf("%d", inpdec2[j]);
    }

    printf("=");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", outin[i]);
    }
    printf(".");
    for (j = 0; j <= 9; j++)
    {
        printf("%d", outdec[j]);
    }
    /*Here, the binaries in the arrays are converted to decimal by respective operation for integer and decimal part.
    For Integral part = every binary in array starting from LSB(0th position) to MSB(last position), we will be multiplied by 2^i where i = 0 to last position number.
    For Example,   Binary -  1   0   0   1   1   1   0   1
                          (LSB)                        (MSB)
    Will be Multiplied by - 2^0 2^1 2^2 2^3 2^4 2^5 2^6 2^7*/
    printf(" = ");
    for (i = 0; i < count; i++)
    {
        newnum = newnum + (outin[i] * pow(2, i));
    }
    /*For Decimal part = every binary in array starting from LSB(0th position) to MSB(last position), we will keep be multiplied by 2^(-j) where j = 0 to last position number.
    For Example,   Binary -   1    0    0    1    1    1    0    1
                            (LSB)                              (MSB)
    Will be Multiplied by - 2^-0 2^-1 2^-2 2^-3 2^-4 2^-5 2^-6 2^-7*/
    for (j = 0; j <= 9; j++)
    {
        newnum = newnum + (outdec[j] * pow(2, (-j)));
    }
    printf("%f", newnum);
    printf("\nThe Answer is %f.", newnum);
    printf("\nEnd of Execution.");
    return 0;
}