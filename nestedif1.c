#include <stdio.h>
void main()
{
    /*enter one integer number in variable n and find the value of w.
    w=x+y+z
    x is 20% of n .
    if n is less than 350,then y is 30% of n.
    if n is between 350-850 then y is 32% of n .
    when n is greater than y is 35% of n.
    z is 75% of y.
    */
   int n;
   float w,x,y,z;
   printf("enter one integer number ");
   scanf("%d",&n);
   x=20*(float)n/100;

   if(n<350)
    y=30*(float)n/100;

    else
    if(n>=350 && n<=850)
    y=32*(float)n/100;

    else
    y=35*(float)n/100;

    z=75*y/100;
    w=x+y+z;

    printf("the value of w=%f",w);

    getch();

}