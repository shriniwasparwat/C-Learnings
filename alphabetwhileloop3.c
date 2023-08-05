#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("alphabets from a to z are: \n");
    while(ch<='z')
    {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}