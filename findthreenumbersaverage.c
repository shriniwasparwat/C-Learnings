#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;

    printf("\tEnter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    /*find average area*/
    avg=a+b+c/3.0;

    printf("\nAverage of three numbers:%f",avg);
    getch();
    
}