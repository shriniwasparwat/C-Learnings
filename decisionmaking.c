#include <stdio.h>
void main()
{
    /* accept one float number in variable n and find the value of variable w?
    w=x+y+z
    x is 40% of y
    y=p+q-r
    r is half of p
    q is 60% of n
    p is 25% of q 
    z is double of x*/


    float n,w,x,y,z,p,q,r;

    printf("enter the one float number ");
    scanf("%f",&n);

    q=60*n/100;
    p=25*q/100;
    r=p/2;
    y=p+q-r;
    x=40*y/100;
    z=2*x;
    w=x+y+z;

    printf("the value of w=%f",w);

    getch();

}