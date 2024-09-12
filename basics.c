#include <stdio.h>

int main()
{
    char name[100]; // Array to store user's name
    int age;        // Variable to store user's age

    // Asking for user's name
    printf("Enter your name: ");
    // Reas the user's name
    fgets(name, sizeof(name), stdin);


    // Asking for user's age
    printf("Enter your age: ");
    scanf("%d", &age);

    //Printing inputs to the terminal
    printf("Hello there %s, did you just say that you are %d", name, age);

    return 0;
}
