#include <stdio.h>
int main()
{
    int dist;
    float time;
    printf("Enter your distance from DTU(in kms):");
    scanf("%d", & dist);
    printf("Enter your estimated travel time for one side:");
    scanf("%f", & time);
    if (dist>=100 && time>=2){
        printf("Allot Hostel");
    }
    else if (dist>=50 && dist<=100 || time>=2){
        printf("You are in first waiting list");
    }
    else if (dist>=30 && dist<=50 || time>=2){
        printf("You are in second waiting list");
    }
    else if (dist<= 30 && time>=2){
        printf("You are in third waiting list");
    }
    else if (dist<=30 && time>=1.5 && time<=2){
        printf("You are in fourth waiting list");
    }
    else if (dist<=30 && time>=1 && time<=1.5){
        printf("You are in fifth waiting list");
    }
    else if (dist<=30 && time<=1){
        printf("Sorry!You don't meet the requirements for getting a hostel");
    }
    else{
        printf("Wrong Input");
    }
    printf("Thanks for using the program \n");
    return 0;
}