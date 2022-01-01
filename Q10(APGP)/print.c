#include <stdio.h>
#include <math.h>
int main() {
    int a, r, n, c, sum1=0,sum=0,  i;
    printf("Enter number of terms in AP&GP series: ");
    scanf("%d", &n); 
    printf("Enter first term and common ratio(or common diff) of AP& GP series: ");
    scanf("%d %d", &a, &r);
    c = a;
    printf("\nAP SERIES  \n");
    for(i = 0; i < n; i++) {
        printf("%d ", c);
        sum += c;
        c = c + r;
    }
    c = a;
    printf("\nGP SERIES\n");
    for(i = 0; i < n; i++) {
        printf("%d ", c);
        sum1 += c;
        c = c * r;
    }
    printf("\nSum of AP till %d terms is %d\n", n, sum);
    printf("\nSum of the GP series till %d terms is %d\n", n, sum1);
    printf("\nNth term of AP is %d  ",(a+(n-1)*r));
    printf("\nNth term of GP is %d", ( a * (int)(pow(r, n - 1)) ));
    return 0;
}