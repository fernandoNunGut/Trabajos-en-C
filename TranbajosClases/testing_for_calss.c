// C Program to check whether
// a number is positive, negative
// or 0 using if else if ladder
#include <stdio.h>
 
int main()
{
    int n = 0;
 
    // all Positive numbers will make this
    // condition true
    if (n > 0) {
        printf("Positive");
    }
 
    // all Negative numbers will make this
    // condition true
    else if (n < 0) {
        printf("Negative");
    }
 
    // if a number is neither Positive nor Negative
    else {
        printf("Zero");
    }
    return 0;
}