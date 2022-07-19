#include <stdio.h>

int main() //ctrl option n
{
    char str[100];
    int i;
    printf("Enter a string:");
    scanf("%s", str);
    printf("Enter a number:");
    scanf("%i", &i);
    printf("\n Your string is: %s\n", str);
    printf("\n Your number is: %i\n", i);
    return 0;
}