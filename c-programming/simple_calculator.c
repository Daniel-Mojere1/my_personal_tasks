/*I want to create a simple calculator*/
#include <stdio.h>
int main ()
{
    char character;
    
    printf("Enter a character operator ['+', '-', '*', '/']: ");
    scanf("%c", &character);
    
    double number1, number2;
    
    printf("Enter a number: ");
    scanf("%lf", &number1);
    
    printf("Enter another number: ");
    scanf("%lf", &number2);
    
    double result;
    
    switch(character) {
        case '+':
        result = number1 + number2;
        printf("%.2lf", result);
        break;
        
        case '-':
        result = number1 - number2;
        printf("%.2lf", result);
        break;
        
        case '/':
        result = number1/number2;
        printf("%.2lf", result);
        break;
        
        case '*':
        result = number1*number2;
        printf("%.2lf", result);
        break;
        
        default:
        printf("invalid code");
        
        printf("%.2lf", result);
    }
    return 0;
}
