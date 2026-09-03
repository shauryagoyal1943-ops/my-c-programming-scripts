#include <stdio.h>
void sum(int a, int b);			// Function Declaration

int main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	sum(a,b);					// Function Call
	return 0;
	}


void sum(int a, int b){
	printf("a+b=%d", a+b);			//Function Defination
}