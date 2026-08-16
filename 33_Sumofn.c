#include <stdio.h>
int main()
{ 
int n, sum;
int i=1;
printf("Enter any number:");
scanf("%d" ,&n);
sum=0;
for (int i=1;i<=n;i=i+1){
printf("%d\n",i);
sum+=i;
}
printf ("The sum of n natural numbers is %d",sum);
return 0;
}