#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, num = 1;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            a[i][j] = num++;

    printf("Pattern:\n");
    printf("1 2 3\n8 9 4\n7 6 5\n");
    return 0;
}
