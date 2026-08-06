#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    printf("The area of circle is:%f", radius * radius * 3.14);
    return 0;
}