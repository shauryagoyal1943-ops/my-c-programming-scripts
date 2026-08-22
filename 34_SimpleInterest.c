#include <stdio.h>
int main()
{
int p,n;
float r, si;
printf("Enter the principal amount:");
scanf("%d", & p);
printf("Enter the number of years:");
scanf("%d", & n);
printf("Enter rate of interest:");
scanf("%f", & r);
si=(p*r*n)/100;
printf("The Simple Interest is:%.2f", si);
printf("Program Succesful\n");
return 0;
}