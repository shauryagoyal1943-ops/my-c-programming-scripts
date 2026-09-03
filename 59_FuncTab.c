#include <stdio.h>
void tab_num(int n);

int main(){
int n;
printf("Enter Number");
scanf("%d", & n);
tab_num(n);
return 0;
}

void tab_num(int n){
for (int i=1;i<=n;i++){
printf("%d * %d = %d", n, i, n*i);
}}
