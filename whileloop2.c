#include <stdio.h>
int main()
{
    int i, start, end;

    printf("Enter start Value: ");
    scanf("%d", &start);
    printf("Enter End Value: ");
    scanf("%d", &end);
    printf("Natural nubers from %d to %d : \n", start, end);

    for(i=start; i<=end; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}