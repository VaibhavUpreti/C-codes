#include <stdio.h>
int main() {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    if (n <= 0.0) {
        if (n == 0.0)
            printf("You entered 0");
        else
            printf("Negative number");
    } 
    else
        printf("Positive number");
    return 0;
}

