#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if (marks>=30&&marks<=100){
        printf("You are pass");
    }
    else if (marks<30&&marks>=0){
        printf("You are fail");
    }
    else{
        printf("Invalid marks");
    }
    return 0;
}