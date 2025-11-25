#include <stdio.h>

int main() {
    char date[20], result[20];
    int d1, d2, y, i = 0, j = 0;

    printf("Enter date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);

    result[j++] = date[0];
    result[j++] = date[1];
    result[j++] = '-';
    result[j++] = 'A';
    result[j++] = 'p';
    result[j++] = 'r';
    result[j++] = '-';

    for (i = 6; date[i] != '\0'; i++)
        result[j++] = date[i];

    result[j] = '\0';

    printf("Converted: %s", result);

    return 0;
}
