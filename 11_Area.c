#include <stdio.h>
int main()
{
    int side;
    printf("Enter the side of square:");
    scanf("%d", &side);
    int area=side * side;
    printf("Area of square is: %d", area);
    return 0;
}
