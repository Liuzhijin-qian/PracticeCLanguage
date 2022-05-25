#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    char b[20];
    char c;
    int i = 0, j = 0;
    printf("Input Char:");
    gets(a);

    for (i = strlen(a) - 1, j = 0; i >= 0;)
        b[j++] = a[i--];

    puts(b);
    printf("\n");
    return 0;
}