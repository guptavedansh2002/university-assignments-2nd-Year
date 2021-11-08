#include<stdio.h>
int binarySearch(int arr[], int size, int s_element)
{
    int beg, high, mid;
    beg = 0;
    high = size;
    
    while (beg <= high)
    {
        mid = (beg + high) / 2;
        if (arr[mid] == s_element)
        {
            return mid;
        }
        if (arr[mid] < s_element)
        {
            beg = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    int element;
    printf("Enter the no. of element in the array: ");
    scanf("%d", &n);
    int arr[n];
    int size = sizeof(arr) / sizeof(int);
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
        printf("\t");
    }
    printf("Enter the element which needs to be searched:");
    scanf("%d", &element);
    int s_index = binarySearch(arr, size, element);

    printf("position = %d", s_index);
    return 0;
}