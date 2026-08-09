#include <stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);
    age>=18? printf("ADULT\n"): printf("MINOR\n");
    return 0;
}
