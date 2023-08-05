#include<stdio.h>
void main()
 {
    float l,b,a,p,d;

    /*area of rectangle=l*b
    perimeter=2*(l+b)
    diagonal=sqrt(l*l+b*b)*/

    printf("enter the length and breadth ");
    scanf("%f%f",&l,&b);

    a=l*b;
    p=2*(l+b);
    d=sqrt(l*l+b*b);

    printf("\narea of triangle=%f",a);
    printf("\nperimeter of trangle=%f",p);
    printf("\ndiagonal of triangle=%f",d);


    getch();




 }