#include <stdio.h>

void reverse(char s[], int start, int end) {
    while (start < end) {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}

int main() {
    char str[300];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    printf("Output: %s", str);
    return 0;
}
