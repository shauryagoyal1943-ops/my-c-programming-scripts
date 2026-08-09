#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age>=18) {
        
        printf("You are an adult.\n");
        printf("You are eligible to vote.\n");
        printf("You are eligible to drive.\n");
    } 
    else {
        printf("You are a minor.\n");
        printf("You are not eligible to vote.\n");
        printf("You are not eligible to drive.\n");
    }
    printf("Thank you for using the program.\n");
    return 0;
}
