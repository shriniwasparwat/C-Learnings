#include <stdio.h>
void main()
{

    int a,b,c,sum;
    float avg;
      
    printf("enter three integer numbers ");
    scanf("%d%d%d",&a,&b,&c);
    
    sum=a+b+c;
    avg=(float)sum/3;

    printf("addition=%d",sum);
    printf("\naverage=%f",avg);

    getch();
    
}