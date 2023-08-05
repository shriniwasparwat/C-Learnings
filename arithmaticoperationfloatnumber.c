#include <stdio.h>
void main()
{
    float n1,n2,sub,add,mul,div;
    

    printf("enter two float number ");
    scanf("%f%f",&n1, &n2);

    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=(float)n1/n2;
     
     printf("\naddition=%f",add);
     printf("\nsustraction=%f",sub);
     printf("\nmultiplication=%f",mul);
     printf("\ndivision=%f",div);

     return 0;

}