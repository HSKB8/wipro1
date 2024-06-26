// round(): This function rounds a floating-point number to the nearest integer value.
#include <stdio.h>
#include <math.h>
int main() {
    double num1 = 7.3;
    double num2 = 7.7;
    long rounded1 = round(num1);
    long rounded2 = round(num2);
    printf("Rounded value of %.2f is %ld\n", num1, rounded1);
    printf("Rounded value of %.2f is %ld\n", num2, rounded2);
    return 0;
}