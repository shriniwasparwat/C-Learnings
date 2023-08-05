#include <stdio.h>
void main()
{
    /*SIMPLE INTEREST=p*n*r/100
    Compound Interest=p*pow(1+r/100,n)*/

    float SI,CI,p,n,r;

    printf("enter the value of p,n,r ");
    scanf("%f%f%f",&p,&n,&r);


    SI=(p*n*r)/100;
    CI=p*pow(1+r/100,n);

    printf("\nsimple interest=%f",SI);
    printf("\ncompound interest=%f",CI);


    getch();

}