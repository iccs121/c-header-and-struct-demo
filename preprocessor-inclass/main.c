/*
Author: Songpon TEERAKANOK

This example will demonstrate how a function is created in another C file 
and linked back here to the main.c

Note: compile and run using, gcc main.c extra_functions.c -o executable; ./executable
*/

#include <stdio.h>
#include "extra_functions.h"
#include "mymath.h"

int main() {
    greet();

    int a=1,b=2;
    printf("\nusing add(a,b) = %d",add(a,b));
    printf("\nvalue of pi = %f", PI);

    struct user alice;
    alice.age = 30;
    printf("\nalice default age = %d",alice.age);

    user bob;
    bob.age = 15;
    printf("\nbob default age = %d",bob.age);

    return 0;
}
