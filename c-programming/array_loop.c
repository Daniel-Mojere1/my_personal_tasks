/*Create a program that computes the average mark of a stuudent.
    - Create an array that stores the mark of 5 subjects.
    - Compute the total marks by adding all the marks
    - Divide the total marks by the total number of subjects
    - Print the average marks*/
#include <stdio.h>

int main() {
    int subjectMark[5];
    int product=0;
    float average;
    printf("Enter 5 input values: ");
    
    for (int i=0; i<5; i++) {
        scanf("%d", &subjectMark[i]);
        product += subjectMark[i];
    }
    average = product/5;
    printf("The average mark is: %.2f", average);

    return 0;
}
