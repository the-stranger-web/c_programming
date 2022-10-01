// [to reverse a string]

#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    int i,len;
    printf("Enter a string: ");
    scanf(" %s",a);
    len = (int) strlen(a);
    for(i=len-1;i>=0;i--)
        printf("%c", a[i]);

    return 0;
}
