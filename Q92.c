#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found\n");

    return 0;
}
