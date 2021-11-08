#include<stdio.h>
//Code to find out the total cost of products bought. Qauntity to be enetered by user.
void main()
{
    int quant;
    float fprice;
    printf("Enter the quantity of electronic components purchased: ");
    scanf("%d", &quant);
    if (quant>501)
    {
        fprice = quant - 0.1*quant;
        printf("Final Price is $%f", fprice);
    }    
    else if (quant<=500 && quant>=401)
    {
        fprice = quant + 50;
        printf("Final Price is $%f", fprice);
    }
    else if (quant<=400 && quant>=250)
    {
        fprice = quant + 100;
        printf("Final Price is $%f", fprice);
    }
    else if (quant<=249)
    {
        fprice = 2.5*quant + .3*quant;
        printf("Final Price is $%f", fprice);
    }
    
}