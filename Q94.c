#include <stdio.h>

int main() {
    char str[300], longest[100], current[100];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            current[currLen] = str[i];
            currLen++;
        } else {
            current[currLen] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                for (j = 0; j <= currLen; j++)
                    longest[j] = current[j];
            }
            currLen = 0;
        }
        i++;
    }

    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}
