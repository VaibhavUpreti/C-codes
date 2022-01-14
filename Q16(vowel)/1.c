#include <stdio.h>
int main() {
    char c;
    int l, u;
    printf("Enter the alphabet: ");
    scanf("%c", &c);
    l = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    u = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (l || u)
        printf("%c ----- vowel.", c);
    else
        printf("%c ----- consonant.", c);
    return 0;
}
