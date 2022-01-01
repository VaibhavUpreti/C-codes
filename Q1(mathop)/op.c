#include <stdio.h>

int main()
{
    int a, b;
    int sum, sub, mult, mod;
    float div;


    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = (float)a / b;
    mod = a % b;

    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", sub);
    printf("Product = %d\n", mult);
    printf("Quotient = %f\n", div);
    printf("Modulus = %d", mod);

    return 0; 
}