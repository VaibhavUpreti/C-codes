#include <stdio.h>
int main()
{
    float base, DA, HRA, gross ;
    printf("Enter basic salary -- ");
    scanf("%f", &base);
    if(base <= 10000){
        HRA = base * 0.2;
        DA  = base * 0.8;
    }
    else if(base <= 20000){
        HRA = base * 0.25;
        DA  = base * 0.9;
    }
    else{
        HRA = base * 0.3;
        DA  = base * 0.95;
    }
    gross = base + HRA + DA;
    printf("Gross salary is = %.4f", gross);
    return 0;
}