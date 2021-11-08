#include<stdio.h>
int main()
{
    int a[50], n,i, j, temp1;
    printf("Enter the number of Elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for (i = 0; i <= n-1 ; i++)
    {
        scanf("\n%d", &a[i]);
    }
    printf("\nArray: ");
    for (i=0; i <=n-1; i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\nSorted array in ascending: ");
    for (i = 0; i <= n-1; i++)
    {
        for (j=i; j<=n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp1 = a[j];
                a[j] = a[j+1];
                a[j+1] = temp1;
            }
        }
    }
    printf("\nNew array:");
    for (i = 0; i <= n-1; i++)
    {
        printf("\t%d", a[i]);
    }
    
}