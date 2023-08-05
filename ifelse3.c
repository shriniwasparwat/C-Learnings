#include <stdio.h>
void main()
{
int a,b,max;

printf("enter two integerb number ");
scanf("%d%d",&a,&b);

if (a>b)
max=a;
else
max=b;

printf("largest number=%d",max);

getch();

}