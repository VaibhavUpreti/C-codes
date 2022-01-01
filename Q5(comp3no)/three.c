#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (b >c)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
}