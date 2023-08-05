#include <stdio.h>
void main()
{
/*program for accept three number and find largest number from it . */

int a,b,c,max;

printf("enter three integer numbers ");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
max=a;

else
if(b>c)
max=b;

else
max=c;

printf("largest number is:%d",max);
getch();

}