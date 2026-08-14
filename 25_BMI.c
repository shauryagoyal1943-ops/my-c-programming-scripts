#include <stdio.h>
int main()
{
    float w,h;
    float bmi;
    printf("Enter your weight in kg:");
    scanf("%f",&w);
    printf("Enter your height in metres:");
    scanf("%f",&h);
    bmi=w/(h*h);
    if (bmi>=30.0) {
    printf("You are obese! Your BMI is: %.2f",bmi);
}
   else if(bmi>=25.0 && bmi<=29.9){
   printf("You are overweight. Your BMI is: %.2f",bmi);
}
   else if (bmi>=18.0 && bmi<=25.0){
   printf("Your BMI is normal. Your BMI is: %.2f",bmi);
}
   else if (bmi<=18.0) {
   printf("You are underweight. Your BMI is: %.2f",bmi);
}
   else{    
   printf("Incorrect Input");
}
return 0;
}