#include<stdio.h>
#include<string.h>
int size, i;
struct components
{
    int sr_no;
    char comp[10];
    char symb;
    int val;
    float cost;
}a;
void print_struct(struct components a[])
{
    printf("The component table is:\n");
    printf("+-----+---------------------------------+--------+------------+-----------+\n");
    printf("|Sr.No|\t\tName of Component\t| Symbol |  Value  |    Cost    |\n");
    printf("+-----+---------------------------------+--------+-----------+------------+\n");
    for (i = 0; i < size; i++)
    {
        a[i].sr_no = i+1;
        printf("|  %d  |\t\t%s\t\t|    %s   |  %d   |  %f  |\n", a[i].sr_no,a[i].comp, a[i].symb, a[i].val, a[i].cost);
        printf("+-----+---------------------------------+--------+-----------+------------+\n");
    }
}

void accept_data(struct components a[])
{
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the component %d name: ", i+1);
        scanf("%s", &a[i].comp);
        printf("\nEnter the component %d symbol: ", i+1);
        scanf("%s", &a[i].symb);
        printf("\nEnter the component %d value: ", i+1);
        scanf("%d", &a[i].val);
        printf("\nEnter the component %d cost: ", i+1);
        scanf("%f", &a[i].cost);
    }

    print_struct(a);
}

void insert_struct(struct components a[])
{
    printf("\nPlease enter the new component's name, symbol, value and cost.");
    printf("\nEnter the component %d name: ", size+1);
    scanf("%s", &a[size].comp);
    printf("\nEnter the component %d symbol: ", size+1);
    scanf("%s", &a[size].symb);
    printf("\nEnter the component %d value: ", size+1);
    scanf("%d", &a[size].val);
    printf("\nEnter the component %d cost: ", size+1);
    scanf("%f", &a[size].cost);
    size++;
    print_struct(a);
}

void del_struct(struct components a[])
{
    int del_index;
    printf("\nPlease Enter the Sr. No of the component to delete: ");
    scanf("%d", &del_index);
    if (del_index<0 || del_index > size)
    {
        printf("Invalid Entry!, try again");
        return;
    }
    for (i = del_index - 1; i < size; i++)
    {
        a[i] = a[i+1];
    }
    size--;
    print_struct(a);
}

void modify_struct(struct components a[])
{
    int mod_index;
    struct components temp, y;
    printf("\nEnter the Sr.No of the component which needs to be modified:");
    scanf("%d", &mod_index);
    if (mod_index<=0 || mod_index>size)
    {
        printf("Invalid Entry!, Try again");
        return;
    }
    
    printf("\nEnter the component %d name: ", mod_index);
    scanf("%s", &y.comp);
    printf("\nEnter the component %d symbol: ", mod_index);
    scanf("%s", &y.symb);
    printf("\nEnter the component %d value: ", mod_index);
    scanf("%d", &y.val);
    printf("\nEnter the component %d cost: ", mod_index);
    scanf("%f", &y.cost);
    
    for (i = 0; i < size; i++)
    {
        if (i == mod_index-1)
        {
            a[i] = y;
            break;
        }
    }
    print_struct(a);
}
int main()
{
    printf("Enter the size of the table: ");
    scanf("%d", &size);
    struct components a[size];
    printf("\nPlease enter the components.");
    accept_data(a);
    int choice;
    printf("\nThere are 3 operations,");
    printf("\n1) Insert");
    printf("\n2) Delete");
    printf("\n3) Modify");
    printf("\nEnter the number of the respective operation: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: //Insert Operation
    {
        printf("\nYou have chosen Insert Operation!");
        printf("\n");
        insert_struct(a);
        break;
    }
    case 2: //Delete Operation
    {
        printf("\nYou have chosen Delete Operation!");
        printf("\n");
        del_struct(a);
        break;
    }
    case 3: //Modify Operation
    {
        printf("\nYou have chosen Modify Operation!");
        printf("\n");
        modify_struct(a);
        break;
    }
    default:
    {
        printf("Please enter the valid number!, try again.");
        break;
    }
    }

    return 0;
}