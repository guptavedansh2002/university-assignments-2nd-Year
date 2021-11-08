#include<stdio.h>

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void end()
{
    printf("\n*******This is the end of execution*******");
}
int main()
{
    printf("*******Array Operations*******\n");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int num[n], i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("The array: ");
    printarray(num, n);

    int a;
    printf("\nThere are mainly 5 operations - Insert, Delete, Modify, Sort, Search.");
    printf("\nEnter 1 for Insert Operation");
    printf("\nEnter 2 for Delete Operation");
    printf("\nEnter 3 for Modify Operation");
    printf("\nEnter 4 for Sort Operation");
    printf("\nEnter 5 for Search Operation");
    printf("\nEnter 6 Exit\n");
    scanf("\n%d", &a);
    if (a == 6)
    {
        printf("*******This is the end of execution*******");
        return 0;
    }
    switch (a)
    {
    case 1: //Insert Operation
    {
        int pos, val;
        printf("\nEnter the position where the new value should be inserted in the array: ");
        scanf("%d", &pos);
        if (pos>n)
        {
            printf("Enter the position of element between 1 to %d, try again!", n);
            end();
            return 0;
        }
        printf("\nEnter the new value to be inserted: ");
        scanf("%d", &val);
        for (i = n - 1; i >= pos - 2; i--)
        {
            num[i + 1] = num[i];
        }
        num[pos - 1] = val;
        printf("\nThe new array is:");
        printarray(num, n+1);
        end();
        break;
    }
    case 2: //Delete Operation (Position and Search)
    {
        int choice;
        int del_pos;
        printf("\nHere you have two options, you can delete an element by position or search the element and delete it.");
        printf("\nFor Position delete, Type 10");
        printf("\nFor Search delete, Type 11\n");
        scanf("%d", &choice);
        if (choice == 10)
        {
            printf("\nYou have chosen Delete by Position.");
            printf("\nEnter the position of element which needs to be deleted: ");
            scanf("%d", &del_pos);
            if (del_pos>n)
            {
                printf("Enter the position which is between 1 to %d, try again!", n);
                end();
                return 0;
            }
            
            for (i = del_pos - 1; i < n; i++)
            {
                num[i] = num[i + 1];
            }

            printf("\nThe new array after deleting position %d element is:\n", del_pos);
            printarray(num, n-1);
            end();
            break;
        }
        if (choice == 11)
        {
            int del_ele, del_index, verif = 0;
            printf("\nYou have chosen Delete by Search.");
            printf("\nEnter the element which needs to be deleted: ");
            scanf("%d", &del_ele);
            i = 0;
            while (i<n+1)
            {
                if (num[i] == del_ele)
                {
                    del_index = i;
                    verif = 1;
                    break;
                }
                i++;
            }
            if (verif == 0)
            {
                printf("\nPlease enter a number which is in the array.");
                end();
                return 0;
            }
            for (i = del_index; i < n-1; i++)
            {
                num[i] = num[i+1];
            }            
            n--;
            printf("\nThe new array after deleting the element is:\n");
            printarray(num, n);
            end();
            break;
        }
    }
    case 3: //Modify Operation
    {
        int replace_pos, new_val;
        printf("\nEnter the position where new value needs to replace: ");
        scanf("%d", &replace_pos);
        if (replace_pos>n)
        {
            printf("Enter the position between 1 to %d, try again!", n);
            end();
            return 0;
        }
        
        printf("\nEnter the new value which needs to replace  at %d position: ", replace_pos);
        scanf("%d", &new_val);

        for (i = 0; i < n; i++)
        {
            if (i + 1 == replace_pos)
            {
                num[i] = new_val;
            }
        }
        printf("\nNew Array after replacing element:");
        printarray(num, n);
        end();
        break;
    }
    case 4: //Sort
    {
        int sortedarra[n], sortedarrb[n], sortedarrc[n], temp, j;
        for (i = 0; i < n; i++)
        {
            sortedarra[i] = num[i];
            sortedarrb[i] = num[i];
            sortedarrc[i] = num[i];
        }

        //Bubble sort
        for (i = 0; i < n; i++)
            for (j = 0; j < n - i; j++)
            {
                if (sortedarra[j] > sortedarra[j + 1])
                {
                    temp = sortedarra[j];
                    sortedarra[j] = sortedarra[j + 1];
                    sortedarra[j + 1] = temp;
                }
            }

        //Selection sort
        int min = 0, minindex = 0, temp1 = 0;
        for (i = 0; i < n; i++)
        {
            min = sortedarrb[i];
            minindex = i;
            for (j = i; j < n+1; j++)
            {
                if (sortedarrb[j] < min)
                {
                    min = sortedarrb[j];
                    minindex = j;
                }
            }
            if (minindex != i)
            {
                temp1 = sortedarrb[i];
                sortedarrb[i] = sortedarrb[minindex];
                sortedarrb[minindex] = temp1;
            }
        }

        //Insertion sort
        int temp2;
        for (i = 1; i < n; i++)
        {
            temp2 = sortedarrc[i];
            j = i - 1;
            while (j >= 0 && sortedarrc[j] > temp2)
            {
                sortedarrc[j + 1] = sortedarrc[j];
                j--;
            }
            sortedarrc[j + 1] = temp2;
        }

        printf("\n");
        printf("Now the code will sort the array.\n");
        printf("\n");
        printf("Sorted array by Bubble Sort is:    ");
        printarray(sortedarra, n);
        printf("\n\n");
        printf("Sorted array by Selection Sort is: ");
        printarray(sortedarrb, n);
        printf("\n\n");
        printf("Sorted array by Insertion Sort is: ");
        printarray(sortedarrc, n);
        end();
        break;
    }
    case 5: //Search
    {
        //Binary Search
        int temp;
        for (i = 0; i < n; i++)
            for (int j = 0; j < n - i; j++)
            {
                if (num[j] > num[j + 1])
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        printf("Sorted array is: ");
        printarray(num, n);
        int s_element, s_index;
        printf("\n");
        printf("\nEnter the number which needs to be searched: ");
        scanf("%d", &s_element);
        int size = sizeof(num)/ sizeof(int);
        int beg, high, mid;
        beg = 0;
        high = size;
        printf("\n");
        printf("Binary Search Result:\n");
        while (beg <= high)
        {
            mid = (beg + high) / 2;
            if (num[mid] == s_element)
            {
                s_index = mid+1;
                printf("%d is at location %d.\n", s_element, s_index);
                break;
            }
            if (num[mid] < s_element)
            {
                beg = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (beg>high)
        {
            printf("The number is not in the array, please enter a number which is in the array.\n");
        }
        //Linear Search
        printf("\n");
        printf("Linear Search results:\n");
        int ind=-1; //Value assigned for Verification
        for (i = 0; i < n; i++)
        {
            if (num[i] == s_element)
            {
                ind = i+1;
                printf("%d is at %d location", s_element, ind);
                break;
            }
        }
        if (ind == -1)
        {
            printf("Invalid Entry");
        }
        end();
        break;
    }
    case 6: //Exit
    {
        printf("\n*******This is the end of execution*******");
        break;
    }
    default:
    {
        printf("\nInvalid input!Try again and please  enter a number between 1 and 4");
        break;
    }
    }
    return 0;
}