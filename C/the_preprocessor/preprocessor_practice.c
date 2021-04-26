#include <stdio.h>
#include "preprocessor_practice.h"

int main(int argc, char const *argv[])
{
    int r = 2;
    printf("The area of a circle with radius %d is: %3.4f", r, CIRCLE_AREA(2));
    
    return 0;
}
