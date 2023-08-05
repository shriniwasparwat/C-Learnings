#include <stdio.h>
void main()
{
    /*area of sphere=4*3.14*r*r
    circumference of sphere=2*3.14*r*/

    float a,c,r;

    printf("enter radius of sphere ");
    scanf("%f",&r);

    a=4*3.14*r*r;
    c=2*3.14*r;

    printf("area of sphere=%f",a);
    printf("\ncircumference of sphere=%f",c);

    getch();
}