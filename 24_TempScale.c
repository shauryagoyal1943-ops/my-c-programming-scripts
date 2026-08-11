#include <stdio.h>
int main()
{
char x,y;
printf("Enter the temperature unit you have:\n");
scanf(" %c",& x);
printf("Enter the temperature unit you want to convert:");
scanf(" %c",& y);
float X;
printf("Enter the temperature degree:");
scanf("%f",& X);
if (x=='C'&& y=='F'){
printf("The temperature in fahrenheit will be:%f",(X*9/5)+32);}
else if(x=='C'&& y=='K'){
printf("The temperature in kelvin will be:%f", X+273);}
else if (x=='F' && y=='C'){
printf("The temperature in Celsius will be:%f",(X-32)*5/9);}
else if(x=='F' && y=='K'){
printf("The temperature in Kelvin will be:%f",(X-32)*5/9+273);}
else if(x=='K'&& y=='C'){
printf("The temperature in Celsius will be :%f",(X-273));}
else if (x=='K' && y=='F'){
printf("The temperature in Fahrenheit will be:%f",(X-273)*9/5+32);}
else{
printf("Incorrect Input");}
printf("Program exited successfully\n");
return 0;
}
