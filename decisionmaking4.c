#include <stdio.h>
void main()
{
    /*accept one float number in variable "num" and then find the value of variablr "res"
    if value of num is greater than 300 then x is 45% of num.else x is 35% of num.
    y is double of x 
    z is 20% of x 
    res=x+y+z*/

    float num,res,x,y,z;

    printf("enter the one float number ");
    scanf("%f",&num);


    if(num>300)
    x=45*num/100;
    else
    x=35*num/100;
    y=2*x;
    z=20*x/100;
    res=x+y+z;

    printf("the value of res=%f",res);
    getch();
    
    }

