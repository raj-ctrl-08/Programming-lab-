#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("FizzBuzz");
    else if (n % 3 == 0)
        printf("Fizz");
    else if (n % 5 == 0)
        printf("Buzz");
    else if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
