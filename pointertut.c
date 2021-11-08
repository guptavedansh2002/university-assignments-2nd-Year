#include <stdio.h>

// int main()
// {
//     // int a = 1026;
//     // int *p;
//     // p = &a;
//     printf("%d\n", &a);
//     printf("%d\n", p);
//     printf("%d\n", *p);
//     printf("%d\n", p+1); //add 4 to address as 1 is an integer and takes up 4bytes of space.
//     printf("%d",p+2); // it is like p+1+1, thus 8 is added to p

//     // printf("Size of integer = %d\n", sizeof(int));
//     // printf("Address = %d, Value = %d\n", p, *p);
//     // printf("Address = %d, Value = %d\n", p+1, *(p+1));
//     // char *p0;
//     // p0 = (char *)p;
//     // printf("Size of char = %d\n", sizeof(char));
//     // printf("Address = %d, Value = %d\n", p0, *p0);
//     // printf("Address = %d, Value = %d", p0+1, *(p0+1));

//     // int **q = &p;
//     // int ***r = &q;
//     // printf("%d\n", a);
//     // printf("p = %d, *p = %d\n", p, *p);
//     // printf("q = %d, *q = %d, **q = %d\n", q, *q, **q);
//     // printf("r = %d, *r = %d, **r = %d, ***r = %d", r, *r, **r, ***r);

//     // int arr[100]={0};
//     // int *arrp = &arr[100];
//     // printf("%d", arrp);
//     // return 0;

    
// }

// void increment(int *p)
// {
//     *p = *p + 1;
// }
// int main()
// {
//     int a = 100;
//     increment(&a);
//     printf("incremented value of a = %d", a);
// }

void main()
{
    int a[5] = {2,3,1,6,7};
    /*printf("Address = %d\n", a);
    printf("Value = %d\n\n", a[0]);
    printf("Address = %d\n", &a[0]);
    printf("Value = %d\n", *a);*/

    for (int i = 0; i <= 4; i++)
    {
        printf("Address = %d\n", a+i);
        printf("Value = %d\n\n", *(a+i));

        printf("another Sample:-\n");
        printf("Address = %d\n", &a[i]);
        printf("Value = %d\n\n", a[i]);

        printf("Next iter\n");
    }   
}