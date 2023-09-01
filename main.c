#include "headers.h"
#include "functions.c"


// main function 
void main()
{
    welcomeScreen();
}

// start screen 
void welcomeScreen()
{
    int choice;

label1:
    screenCleaner();
    printf("===============================================================\n");
    printf(">>>>>>>>>>>>>>>  Welcome to Number System Converter <<<<<<<    \n");
    printf("===============================================================\n");
 

    printf(">> Select Conversion Type: \n");
    printf("> 1. Binary Conversion \n");
    printf("> 2. Decimal Conversion \n");
    printf("> 3. Octal Conversion \n");
    printf("> 4. Hexadecimal Conversion \n");
    printf("> 5. Exit the Program \n\n");
    printf("Enter the number & Hit ENTER: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            userInput(1);
            break;
        case 2:
            userInput(2);
            break;
        case 3:
            userInput(3);
            break;
        case 4:
            userInput(4);
            break;
        case 5:
            exitScreen();
            break;
        default:
            printf("\nError: the number must be between 1 to 5.\n");
            printf("Press any key to continue... \n");
            getch();
            goto label1;
    }
}

