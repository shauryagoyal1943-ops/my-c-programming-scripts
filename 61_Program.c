#include <stdio.h>
void are_square(int side);
void are_circle(int rad);
void are_rectangle(int length, int breadth);

int main()
{
    int side, rad, length, breadth;
    side=5;
    rad=78;
    length=45;
    rad=18;
    are_square(side);
    are_circle(rad);
    are_rectangle(length, breadth);
    return 0;
}

void are_square(int side){
    printf("Area of square=%d\n", side*side);
}
void are_circle(int rad){
    printf("Area of circle=%f\n", 3.14*rad*rad);
}

void are_rectangle(int length, int breadth){
    printf("Area of rectangle=%d\n", length*breadth);
    }