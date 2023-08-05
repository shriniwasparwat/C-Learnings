/**
  C program to check uppercase and lowercase using macro
 */

#include <stdio.h>

// Macro definitions
#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z')

int main()
{
    char ch;

    // Input a character from user
    printf("Enter any character: ");
    ch = getchar();

    if (IS_UPPER(ch))
        printf("'%c' is uppercase\n", ch);
    else if (IS_LOWER(ch))
        printf("'%c' is lowercase\n", ch);
    else 
        printf("Entered character is not alphabet");

    return 0;
}