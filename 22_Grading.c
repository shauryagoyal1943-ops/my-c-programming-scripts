#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks>90&&marks<=100){
        printf("A+");}
        else if (marks>79&&marks<=90){
            printf("A");
        }
        else if (marks>60&&marks<=79){
            printf("B");
        }
        else if (marks>49&&marks<=60){
            printf("C");
        }
        else if (marks>39&&marks<=49){
            printf("D");
        }
        else if (marks>=0&&marks<=39){
            printf("F");
        }
        else{
            printf("Invalid marks");
        }
    return 0;
}
