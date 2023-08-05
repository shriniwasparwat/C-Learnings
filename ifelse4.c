#include <stdio.h>
void main()
{
    int a,b,max;

    printf("enter two integer number ");
    scanf("%d%d",&a,&b);

    max=(a>b)? a:b;
    printf("largest number=%d",max);
    getch();


}