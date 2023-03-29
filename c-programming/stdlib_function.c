/*Create a program that computes the result of a number raised to the power of the square root of a number.
    - Take input from user
    - Compute the square root of the number
    - Compute the power of the number raised to the power of its square root.
    - Print the result*/
#include <stdio.h>
#include <math.h>

int main() {
    
    int number;
    printf("Input a number please: ");
    scanf("%d", &number);
    
    double a = sqrt(number);
    double result= pow(number,a);
    printf("The result is %.2lf", result);
    
    return 0;
}
