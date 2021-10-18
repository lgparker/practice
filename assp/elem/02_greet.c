// Elementary 2: Greet the user

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Longest name in recorded history is 747 chars
    char name[747];

    // Get user input and handle newline
    printf("What is your name?\nEnter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n\r")] = 0;

    // Print message to stdout
    if (name[0] != '\0')
    {
        printf("Hello %s!\n", name);
    }
    else
    {
        printf("Are you a horse with no name?\n");
    }

    return 0;
}

