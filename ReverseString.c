#include <stdio.h>
int main()
{
    char str[] = "Arjun";
    // printf("%s", str);
    
    int i;
    for (i = 4 ; i >= 0; i--)
    {
        // printf("inside for loop");
        char c = str[i];
        printf("%c", c);
        printf("after for loop");
    }

    return 0;
}