#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != '\n')       // ignore newline stored by fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
