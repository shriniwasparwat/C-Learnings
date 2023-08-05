#include <stdio.h>
void main()
{
/*accept one float number in variable x and find the value of y?
m is 65% of x when x is greater than or equals to 250 else m is 60% of x
n is 25% of x 
j=k+s
k is half of s 
if x is 175 or less than s is 32% of x otherwise s is 38% of x
y=m+n+j

*/

float x,y,m,n,j,s,k;

printf("enter the one float number ");
scanf("%f",&x);

if(x>=250)
m=65*x/100;
else
m=60*x/100;
n=25*x/100;
if(x<=175)
s=32*x/100;
else
s=38*x/100;
k=s/2;
j=k+s;
y=m+n+j;

printf("the value of y=%f",y);

getch();

}