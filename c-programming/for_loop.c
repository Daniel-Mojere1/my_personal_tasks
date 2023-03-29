/*I intend to write a program that takes an input from the usera and prints it if the value is a negative odd number,
    - If the input is positive, end the loop with the message, positive value.
    - If the input value is negative even, skip the value with message, negative value.
    */
    
    // Pseudocode:
    // - We would use a while loop.
    // - Declare a variable, say 'number'
    // - Collect the value of the variable using the scanf
    // - Utilize break and continue in an if loop
    // - Make the loop print if the number is negative odd number
    // - End the loop with 'break' if the number is positive
    // - Skip the number if the input number is a negative even number
    
    
#include <stdio.h>

int main () {
    
    while (1) {
        int number;
        printf("Enter a random number, negative/positive: ");
        scanf("%d", &number);
        
        if (number > 0) {
            printf("Positive value");
            break;
        }
        
        if ((number < 0) && ((number % 2)==0)) {
            printf("Negative Even");
            continue;
        }
        printf("%d \n", number);
    }
    

    return 0;
}
