#include <stdio.h>
/*
This is our first c program
which is awesome!
*/
int main()
{
    int a = 4;
    // int b = 8.5; // Not recommended because 8.5 is not an Integer
    float b = 8.5;
    char c = '$';
    int d = 32;
    int e = 45 + 45;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", d / a);
    printf("Sum of a and d is %d", e);
    return 0;
}