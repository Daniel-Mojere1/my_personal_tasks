/*Using the switch statement, create a program tat will find the month based on the number input. 
Take the input number from 1 to 12. And print the corresponding month based on the inpu value.
    - If number is 1, print January
    - If number is 2, print February
    - If number is 3, print March and so on.*/
    
#include <stdio.h>

int main() {
// Pseudocode:
// - Declear an int variable say 'number'
    int number;
    
// - Request number input using the scanf function
    printf("Please enter a number from 1 to 12: ");
    scanf("%d", &number);
    
// - Include the switch statements and 'number' in the parethesis(variable) as its the determining variable.
// - Include break in each cases
    switch (number){
        case 1:
        printf("January");
        break;
        
        case 2:
        printf("February");
        break;
        
        case 3:
        printf("March");
        break;
        
        case 4:
        printf("April");
        break;
        
        case 5:
        printf("May");
        break;
        
        case 6:
        printf("June");
        break;
        
        case 7:
        printf("July");
        break;
        
        case 8:
        printf("August");
        break;
        
        case 9:
        printf("September");
        break;
        
        case 10:
        printf("October");
        break;
        
        case 11:
        printf("November");
        break;
        
        case 12:
        printf("December");
        break;
        
        default:
        printf("Invalid number");
        break;
        
    }
// - Run the code

    return 0;
}
