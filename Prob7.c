/******************************************* 
Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’
at the keyboard.
********************************************/

#include <stdio.h>
int main() {
    char input;

    printf("Type characters and press Enter. Type 'A' to exit.\n");

    do {
        input = getchar();
        if (input != '\n') { 
            printf("You typed: %c\n", input);
        }
    } while (input != 'A');
}

/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/