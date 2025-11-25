#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            printf("%c", str[i+1]);
        i++;
    }

    return 0;
}
