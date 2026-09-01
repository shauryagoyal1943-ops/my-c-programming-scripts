#include <stdio.h>
int main()
{
	int n;
	printf("Enter Number:");
	scanf("%d", & n);
	for (int i=1;i<=n;i=i+1){
		for (int j=1;j<=n;j=j+1){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
