#include <stdio.h>
void main()
{
    /*accept the cost of purchased mobile handset and then find the payable amount ?
    payable amount=mobile cost+gst-discount
    if mobile cost is less than 10000 then gst is 12% 0f mobile cost otherwise gst is 18% 
    discount is 5% of mobile cost 
    */


   float mc,pa,gst,dis;
   printf("enter the cost of mobile ");
   scanf("%f",&mc);

   if(mc<10000)
   gst=12*mc/100;
   else
   gst=18*mc/100;
   dis=5*mc/100;
   pa=mc+gst-dis;

   printf("enter payable amount of mobile=%f",pa);

   getch();
}