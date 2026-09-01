#include <stdio.h>
int main()
{
int n;
printf("Enter number of char");
scanf("%d", & n);
for (int i=1;i<=n; i++){
for (int j=1;j<=n-i;j++){
printf(" ");}
for (char ch='A';ch<='A'+ i-1;ch++){
printf("%c ", ch);}
printf("\n");}
return 0;
}