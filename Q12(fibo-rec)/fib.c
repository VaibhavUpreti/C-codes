#include<stdio.h>
int fib(int);
int main()
{
    int n, i = 0, a;
    printf("Enter no of terms in Fib series- ");
    scanf("%d",&n);
    printf("Fibonacci series\n");
    for ( a = 1 ; a <= n ; a++ ){
        printf("%d\n", fib(i));
        i++; 
    }
    return 0;
}
int fib(int n)
{
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( fib(n-1) + fib(n-2) );
} 