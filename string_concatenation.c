// [to concatenate two strings]

#include <stdio.h>

int main()
{
    char str1[10], str2[10];
    int i, j;
    printf("Enter first string:\n");
    scanf(" %s", str1);
    printf("Enter second string:\n");
    scanf(" %s", str2);

    i = 0;
    while (str1[i] != '\0')
        i++;

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string = %s", str1);
    return 0;
}