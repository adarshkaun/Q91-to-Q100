#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char c = str[i];
        if (!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
              c=='A' || c=='E' || c=='I' || c=='O' || c=='U'))
            result[j++] = c;
        i++;
    }

    result[j] = '\0';

    printf("String without vowels: %s", result);

    return 0;
}
