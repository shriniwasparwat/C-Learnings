#include <stdio.h>
void main()
{
    /*ACCEPT THREE FLOAT NUMBER AND FIND SMALLEST NUMBER FROM THEM*/
    float x,y,z,small;

    printf("enter three float numbers ");
    scanf("%f%f%f",&x,&y,&z);
    
    if(x<y && x<z)
    small=x;
    else
    if(y<z)
    small=y;

    else
    small=z;

    printf("smallest number is:%f",small);


    getch();


    
    }