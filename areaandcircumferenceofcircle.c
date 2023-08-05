#include <stdio.h>
void main()
{
    /*formula for area=3.14*r*r
    formula of circumference= 2*3.14*r */

    float a,c,r;

    printf("enter the radius of circle\n");
    scanf("%f",&r);

    a=3.14*r*r;
    c=2*3.14*r;

    printf("area of cicle=%f",a);
    printf("\ncircumference of circle=%f",c);

    getch();


}