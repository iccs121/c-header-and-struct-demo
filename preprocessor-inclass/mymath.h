#ifndef MYMATH_H
#define MYMATH_H

struct user{
    char name[30];
    int age;
    long id;
};
typedef struct user user; // typedef A B --> I declare A will be known as B

// Function prototype declarations
#define PI 3.1416
int add(int,int);
int subtract(int,int);
#endif // EXTRA_FUNCTIONS_H