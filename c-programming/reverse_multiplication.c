/*I intend to create a multiplication table using a 'while loop' such that the table will count from top to bottom i.e from 12 to 1.
The user will input a number and the multiplication of that number would be done from 12 to 1.
*/

// Pseudo code:
// - Declare an int variable say 'number'
// - Collect a certain number from the user using scanf
// - Declare the variable 'number would be ,multiply with' say 'count'.
// - Create a while loop such that the count decrease by 1 and  code terminate when count is 1.
// - Run the code


#include <stdio.h>

int main ()
{
    int number;
    printf("Enter a number whose multiple you want: ");
    scanf("%d", &number);
    
    int count = 12;
   
    while (count >= 1)
    {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);
        count -=1;
    } 
    return 0;
}
