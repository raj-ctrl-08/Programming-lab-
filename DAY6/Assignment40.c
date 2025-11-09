#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    switch (age >= 18) {
        case 1:
            printf("Eligible to vote.");
            break;
        case 0:
            printf("Not eligible to vote.");
            break;
    }
    return 0;
}
