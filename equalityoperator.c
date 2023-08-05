#include <stdio.h>
void main()
{
    /*use equqlity operator*/

    int a,b;
    printf("enter two integer number ");
    scanf("%d%d",&a,&b);

    if(a==b)
    printf("both numbers are equal no one is greater ");

    else
    if(a>b)
    printf("first number is greater ");

    else 
    printf("second number is greater ");

    getch();
}