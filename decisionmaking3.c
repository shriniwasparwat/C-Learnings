#include <stdio.h>
void main()
{
    /*accept the one integer number in variable s and find value of y?
    y=p+q+r
    p is 25% of s 
    when s is below 200 then q is 60% of s otherwise q is 70% of s 
    r is half of q*/

    int s;
    float p,q,r,y;
     printf("enter the value of integer number ");
     scanf("%d",&s);


    p=25*(float)s/100;
    if(s<200)

    q=60*(float)s/100;
    else
    q=70*(float)s/100;
    r=q/2;
    y=p+q+r;

    printf("\nvalue of y=%f",y);

    getch();

}