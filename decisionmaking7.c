#include <stdio.h>
void main()
{
    /*accept the fees paid by student and then find the applicable consetion for that student 
    applicable consetion=regular consetion+special concetion 
    regular consetion is 5% of fees paid
    special consetion is 15% of paid fees when paid fees is less than 25000 otherwise special consetion is 25% of paisd fees
     */

    float fp,ac,rc,sc;
    
    printf("enter the fees paid ");
    scanf("%f",&fp);

    rc=5*fp/100;

    if(fp<25000)
    sc=15*fp/100;
    else
    sc=25*fp/100;

    ac=rc+sc;

    printf("applicable consetion is=%f",ac);
    getch();
    
}