#include <stdio.h>
void main ()
{
int num, numcopy,sum=0,rem;

printf("enter a number \n");
scanf("%d", &num);
numcopy=num;

while(num!=0){
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
}
if(numcopy==sum) 

printf("\n%d is a armstrong number\n",numcopy);

else
    printf("\n%d is not armstrong number\n",numcopy);

    getch();






}