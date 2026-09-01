#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i=i+1){
        for (int j=1;j<=n-i;j=j+1){
            printf(" ");
        }
        for (int k=1;k<=i;k=k+1){
            printf("*");
        }
        printf(" \n");
    }
}