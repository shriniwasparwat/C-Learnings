#include <stdio.h>
void main()
{

/*x is integer number
find value of y?
y=a+b+c
a is double of b
b is 75% of x 
c is half of b*/

int x;
float a,b,c,y;

printf("enter one integer number ");
scanf("%d",&x);

b=75*(float)x/100;
a=2*b;
c=b/2;
y=a+b+c;

printf("the value of y=%f",y);

getch();

}