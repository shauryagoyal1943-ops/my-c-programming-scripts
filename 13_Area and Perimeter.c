#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the length of rectangle:");
    printf("Enter the breadth of rectangle:\n");
    scanf("%d,%d",&a,&b);
    printf("The perimter of rectangle is %d",2*(a+b));
    printf("The area of rectange is %d",a*b);
    return 0;

}
