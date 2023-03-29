/*I intend to create a multiplication table.
The user will input a number and the multiplication of that number would be done from 1 to 24.
*/

// Pseudo code:
// - Declare an int variable say 'number'
// - Collect a certain number from the user using scanf
// - Declare the variable 'number would be ,multiply with' say 'count'.
// - Create a while loop such that the count increase by 1 and  code terminate when count is 12.
// - Run the code

#include <stdio.h>
int main ()
{
    int number;
    printf("Enter a number whose multiple you want: ");
    scanf("%d", &number);
    
    int count = 1;
   
    while (count <= 24)
    {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);
        count +=1;
    }
    
    return 0;
}
