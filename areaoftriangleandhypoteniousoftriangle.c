#include <stdio.h>
void main()
{
/* area of triangle=1/2*b*h
hypotenious=sqrt(b*b+h*h)*/

float a,b,h,hy;

printf("enter the base and height ");
scanf("%f%f",&b,&h);

a=(float)1/2*b*h;
hy=sqrt(b*b+h*h);

printf("area of triangle=%f",a);
printf("\nhypotenious of triangle=%f",hy);

getch();

}