#include<stdio.h>
void main()
{
    /*accept one integer number 'n' and find the value of w
    w=a+b+c
    a is double of b
    when n is less than 125 then b is 30% of n otherwise b is 40% of n
    c is 20% of a*/

    int n;
    float w,a,b,c;

    printf("Enter one integer number ");
    scanf("%d",&n);

    if(n<125)
    b=30*(float)n/100;
    else
    b=40*(float)n/100;
    a=2*b;
    c=20*a/100;
    w=a+b+c;
    
    printf("the value of w=%f",w);

    getch();

}