#include <stdio.h>

int main() {
    char s1[200], s2[200], temp[400];
    int i, j, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    i = 0;
    while (s1[i] != '\0') {
        if (s1[i] == '\n') { s1[i] = '\0'; break; }
        i++;
    }

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    i = 0;
    while (s2[i] != '\0') {
        if (s2[i] == '\n') { s2[i] = '\0'; break; }
        i++;
    }

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not Rotation\n");
        return 0;
    }

    for (i = 0; i < len1; i++) temp[i] = s1[i];
    for (i = 0; i < len1; i++) temp[len1 + i] = s1[i];
    temp[2 * len1] = '\0';

    for (i = 0; i <= 2 * len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != s2[j]) break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found) printf("Rotation\n");
    else printf("Not Rotation\n");

    return 0;
}
