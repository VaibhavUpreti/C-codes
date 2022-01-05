/**
 * C program to print rectangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, n, columns;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &n);


    /* Iterate through each row */
    for(i=1; i<2*n; i++)
    {
        /* Iterate through each column */
        for(j=1; j<2*n; j++)
        {
            /* For each column print star */
            printf("*");
        }
        
        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}