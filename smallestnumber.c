#include <stdio.h>
void main()
{
    /*Smallest Float Number */

    float a,b,small;
    printf("enter two float numbers ");
    scanf("%f%f",&a,&b);

    if (a<b)
    small=a;

    else
    small=b;

    printf("\nsmallest of the two numbers is:%f",small);



    getch();
    return 0;
}