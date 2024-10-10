#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    printf("Enter the character: \n");
    scanf(" %c", &input);

    if (!isalnum(input))
    {
        printf("It is a special character.\n");
    }
    else if (isdigit(input))
    {
        printf("It is a digit.\n");
    }
    else
    {
        printf("It is an alphabet.\n");
    }

    printf("The ASCII code of '%c' is: %d\n", input, input);
    return 0;
}




