#include<stdio.h>

int main()
{
    //Creating and Displaying the array
    int num[50], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i=0; i<= n-1; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("The array: ");
    for (i = 0; i <= n-1; i++)
    {
        printf("\t%d", num[i]);
    }
    
    //Insert Operation
    int pos, val;
    printf("\nEnter the position where the new value should be inserted in the array: ");
    scanf("%d", &pos);
    printf("\nEnter the new value to be inserted: ");
    scanf("%d", &val);
    for (i = n-1; i >= pos-2; i--)
    {
        num[i+1] = num[i]; 
    }
    num[pos-1] = val;
    printf("\nThe new array is:");
    for (i = 0; i <= n; i++)
    {
        printf("\n%d", num[i]);
    }
    
    //Delete Operation
    int del_pos;
    printf("\nEnter the position of element which needs to be deleted: ");
    scanf("%d", &del_pos);
    for (i = del_pos-1; i <= n; i++)
    {
        num[i] = num[i+1];    
    }
    
    printf("The new array after deleting position %d element is:\n", del_pos);
    for (i = 0; i<= n-1; i++)
    {
        printf("%d\n", num[i]);
    }
    
    //Modify Operation
    int replace_pos, new_val;
    printf("Enter the position where new value needs to replace: ");
    scanf("%d", &replace_pos);
    printf("Enter the new value which needs to replace  at %d postion: ", replace_pos);
    scanf("%d", &new_val);

    for (i = 0; i<n; i++)
    {
        if (i+1 == replace_pos)
        {
            num[i] = new_val;
        }
    }
    printf("New Array after replacing element: ");
    for (i=0; i<=n-1; i++)
    {
        printf("\t%d", num[i]);
    }
    return 0;
}