#include<stdio.h>
#include<math.h>

/*void main()
{
    double a;
    float b;
    int c, arr1[50], arr2[50], count, nin, ndec, newnum=0, base = 1, add = 0;
    scanf("%lf", &a);
    c = a;
    b = a-c;
    int i = 0;
    while (c != 0)
    {
        nin = c%2;
        c /= 2;
        arr1[i] = nin;
        count += 1;
        i++;
    }
    int j;
    for (j = 0; j <= 9; j++)
    {
        b = b*2;
        ndec = b;
        arr2[j] = ndec;
        if (ndec == 1)
        {
            b = b - 1;
        }       
    }
    for (i = count-1; i >= 0; i--)
    {
        printf("%d", arr1[i]);
    }
    printf(".");
    for (i = 0; i <= 9; i++)
    {
        printf("%d", arr2[i]);
    }
    printf("\ncount is = %d", count);
    i = 0;
    j = 0;
    while (i<count)
    {
        newnum = newnum + (arr1[i]*pow(2,i));
        i = i+1;
        j = j+1;
    }
    printf("\nnumber = %d", newnum);
    
}*/

// void main()
// {
//     int n, beg, end, mid, a, loc;
//     printf("Enter the number of elements:");
//     scanf("%d\n", n);
//     int arr[n];
//     printf("Enter the elements in the array:\n");
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d\n", arr[i]);
//     }
//     printf("Enter the number which needs to be searched: ");
//     scanf("%d\n", a);
// }

// void bubblesort(int array[], int n)
// {
//     int i, j, temp;
//     for (i = 0; i < n-1; i++)
//     {
//         for (j = 0; j < n-i; j++)
//         {
//             if (array[i]>array[i+1])
//             {
//                 temp = array[i];
//                 array[i] = array[i+1];
//                 array[i+1] = temp;
//             }
            
//         }
        
//     }
//     printf("Sorted array is :");
//     for (i = 0; i < n-1; i++)
//     {
//         printf("%d\t", array[i]);
//     }  
// }

// void binarysearch(int array[], int n, int a)
// {
//     int beg, end, mid;
//     beg = 0;
//     end = n-1;
//     mid = (end+beg)/2;
//     if (array[mid] == a)
//     {
//         return mid;
//     }
    
// }