#include <stdio.h>
int main()
{
    float dis;
    printf("Enter the distance between two cities in km:");
    scanf("%f",& dis);
    printf("\nThe distance in meters is:%.2f",dis*1000);
    printf("\nThe distance in centimeters is :%.2f",dis*100000);
    printf("\nThe distance in feet is:%.2f",dis*3280.84);
    printf("\nThe distance in inches is:%.2f",dis*39370.1);
    return 0;
}
