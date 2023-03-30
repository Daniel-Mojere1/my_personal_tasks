#include <stdio.h>

int sum(int number);

int main () {
    
    int result, number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    result=sum(number);
    printf("Sum = %d", result);
    
    return 0;
}
int sum(int number){
    if (number != 0) {
        return number + sum (number - 1);
    }
    else {
        return number;
    }
}
