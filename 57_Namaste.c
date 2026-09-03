#include <stdio.h>
void HelloInd();
void HelloFre();

int main()
{
char N;
printf("enter french-F or indian-I:");
scanf("%c", & N);
if (N=='I'){
HelloInd();}
else if (N=='F'){
HelloFre();}
else{printf("Hello");}
return 0;
}

void HelloInd(){
printf("Namaste");}

void HelloFre(){
printf("Bonjour");}
