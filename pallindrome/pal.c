#include <stdio.h>

int main() {
    int n, a, rev = 0, r;

    printf("Enter a number- ");
    scanf("%d", &n);    
    a = n;
    
    while (n > 0){
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (a == rev){
        printf("Palindromic number"); 
    }
    else{
        printf("Not a palindromic number"); 
    }    
    return 0; 
} 
