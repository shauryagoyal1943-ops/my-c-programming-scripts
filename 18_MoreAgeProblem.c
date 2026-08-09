# include <stdio.h>
int main() {
    int age;
    printf("Enter age:");
    scanf("%d", &age);
    if (age>=18 && age<=60)
    {printf("You are an adult. \n");
    }
    else if (age>=13 && age<18)
    {printf("You are a teenager.\n");
    }
    else if (age>60)
    {printf("You are a senior citizen.\n");
    }
    else
    {printf("You are a child.\n");
    }
    return 0;
}
