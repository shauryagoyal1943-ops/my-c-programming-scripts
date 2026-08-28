#include <stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter any number:");
    scanf("%d", & n);
    i=1;
    sum=0;
    while (i<=n){
        sum=sum+i;
        i=i+1;
    }
    printf("The sum is %d\n",sum);

    for (int i=1;i<=n;i=i+1){
        printf("%d", i)
    }
    printf("Thanks!\n");
    return 0;
}