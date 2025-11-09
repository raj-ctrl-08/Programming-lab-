#include <stdio.h>

// Function to find length of string
int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Function to copy one string to another
void strCopy(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to append two strings
void strConcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

// Function to compare two strings
int strCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

int main() {
    char str1[100], str2[100], copy[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of first string: %d\n", strLength(str1));

    strCopy(str1, copy);
    printf("Copied string: %s\n", copy);

    strConcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    if (strCompare(copy, str2))
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

















