#include <stdio.h>

int main() {
    int i, j, n = 3;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n; j++) {
            if (j <= i)
                printf("%d ", j);
            else
                printf("  ");
        }
        for (j = n - 1; j >= 1; j--) {
            if (j <= i)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
