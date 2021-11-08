#include <stdio.h>

int main()
{
    int num[50], sortnum[50], m, n, sum = 0, i, temp, min, j, minindex;
    printf("Please enter your 5 Digits roll no.:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum of Digits in the Roll no. entered is = %d\n", sum);

    printf("Array using sum of digits of roll no. made by adding or subtracting 1 or 2:\n");

    num[0] = sum + 1;
    num[1] = sum - 1;
    num[2] = sum + 2;
    num[3] = sum - 2;

    for (i = 0; i <= 3; i++)
    {
        printf("%d\t", num[i]);
    }

    printf("\nNow the code will sort the array using selection sort.");
    for (i = 0; i < 3; i++)
    {
        min = num[i];
        minindex = i;
        for (j = i + 1; j < 4; j++)
        {
            if (num[j] < min)
            {
                min = num[j];
                minindex = j;
            }
        }
        if (minindex != i)
        {
            temp = num[i];
            num[i] = num[minindex];
            num[minindex] = temp;
        }
    }

    printf("The sorted array is:\n");

    for (i = 0; i <= 3; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");
    //Binary Search
    int s_n, s_pos;
    int l=0, r=0, middle=0;
    l = 0;
    r = 3;
    middle = (r + l) / 2;
    printf("Enter the number that needs to be searched: ");
    scanf("%d", &s_n);
    printf("%d\n", s_n); //delete
    printf("r = %d\n", r);
    printf("mid = %d\n", middle); //delete
    while (l <= r)
    {
        if (sortnum[middle] < s_n)
        {
            l = middle+1;
            printf("l = %d\n",l); //delete
        }
        else if (sortnum[middle]==s_n)
        {
            printf("%d is at %d location", s_n, middle+1);
            break;
        }
        else
        r = middle-1;
        middle = (r+l)/2;
    }
    if (l > r)
    {
        printf("%d is not in the array.", s_n);
    }    
    return 0;
   
}
