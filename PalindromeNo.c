#include <stdio.h>
int main() {
    int n, rev = 0, rm, d;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    d = n;

    while (n != 0) {
        rm = n % 10;
        rev = rev * 10 + rm;
        n /= 10;
    }

    if (d == rev)
        printf("%d Palindrome No:\n", d);
    else
        printf("%d Not Palindrome No:\n", d);

    return 0;
}

