#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
        i++;

    if (i > 0 && str[i - 1] == '\n')
        i--;

    j = i - 1;

    int flag = 1;

    for (int k = 0; k < i / 2; k++) {
        if (str[k] != str[j - k]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
