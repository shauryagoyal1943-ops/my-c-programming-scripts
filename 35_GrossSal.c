#include <stdio.h>
int main()
{
float bs, da, hra, gs;
printf("\n Enter your basic salary:");
scanf("%f", & bs);
da=0.4*bs;
hra=0.2*bs;
gs=bs+da+hra;
printf("\nThe basic salary is:%.2f",bs);
printf("\nThe dearness allowance is:%.2f",da);
printf("\nThe house rent allowance is:%.2f",hra);
printf("\nThe gross salary is:%.2f",gs);
return 0;
}



