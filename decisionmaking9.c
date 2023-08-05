#include <stdio.h>
void main()
{
    /*accept one float number in variable x and find value of y=a+b.
    when x is below 200 then a is 20% of x.when x is between 200-500 then a is 30% of x. otherwise a is 45% of x .
    b is half of a.
    */
   float x,y,a,b;

   printf("enter one float number ");
   scanf("%f",&x);

   if(x<200)
   a=20*x/100;

    else
    if(x>=200 && x<=500)
    a=30*x/100;

    else
    a=45*x/100;

    b=a/2;
    y=a+b;

    printf("the value of y=%f",y);

    getch();


}