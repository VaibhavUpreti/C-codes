#include <stdio.h>

int main()
{
    int shape;
    float side, base, l, b, h, A, r;
    printf("-------------------------\n");
    printf(" 1 --> Rectangle\n");
    printf(" 2 --> Circle\n");
    printf(" 3 --> Triangle\n");
    printf(" 4 --> Square\n");
    printf("Enter the Shape\n");
    scanf("%d", &shape);
    switch(shape)
    {
    case 1:
        printf("Enter the length and breath\n");
        scanf("%f %f",  &l,&b);
        A = b * l;
        printf("Area of the Reactangle = %.2f\n", A);
        break;
    case 2:
        printf("Enter radius\n");
        scanf("%f", &r);
        A = 3.14 * r * r;
        printf("Area of a circle = %f\n", A);
        break;
    case 3:
        printf("Enter the base and height\n");
        scanf("%f %f", &base, &h);
        A = 0.5 * base * h;
        printf("Area of Triangle = %f\n", A);
        break;
    case 4:
        printf("Enter the side\n");
        scanf("%f", &side);
        A = side * side;
        printf("Area of the Square=%.2f\n", A);
        break;
    default:
        printf("Pls select the correct shape\n");
        break;
    }

    return 0;
}