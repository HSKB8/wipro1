// sin(): This function calculates the sine of an angle in radians.
#include <stdio.h>
#include <math.h>
int main()
{
    double angle = 1.047; // 60 degrees in radians
    double sineValue = sin(angle);
    printf("Sine of %.2f radians is %.2f\n", angle, sineValue);
    return 0;
}