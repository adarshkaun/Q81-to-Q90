#include <stdio.h>

int main() {
    char str[200], rev[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
        i++;

    if (i > 0 && str[i - 1] == '\n')
        i--;

    j = i - 1;

    for (int k = 0; k < i; k++) {
        rev[k] = str[j];
        j--;
    }

    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
