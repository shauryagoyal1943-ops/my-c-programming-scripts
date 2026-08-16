#include <stdio.h>
int main()
{
 char ch;
 int asc;
 printf("Enter the character to be checked:");
 scanf("%c", &ch);
 asc=ch;
 if (asc>=65 && asc<=90){
 printf("The character is uppercase");
}
 else if (asc>=97 && asc<=122){
 printf("The character is lowercase");
}
 else{
 printf("Incorrect operator");
}
return 0;
}