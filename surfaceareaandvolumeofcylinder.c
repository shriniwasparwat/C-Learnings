#include <stdio.h>
void main()
{
    /*surface area of cylinder=2*r*r+2*3.14*r*h
    volume of cylinder=3.14*r*r*h
    */

   float s,v,r,h;

   printf("enter value of radius and height ");
   scanf("%f%f",&r,&h);

   s=2*r*r+2*3.14*r*h;
   v=3.14*r*r*h;

   printf("surface area of cylinder=%f",s);
   printf("\nvolume of cylinder=%f,v");
   
   getch();

}