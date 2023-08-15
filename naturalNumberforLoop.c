#include <stdio.h>
void main()
{
    int count, num, sum=0;

    printf("enter any integer numbers\n");
    scanf("%d",&num);

    for(count=1; count<=num; count++)
    sum=sum+count;

    printf("sum:%d",sum);

    getch();
    

}