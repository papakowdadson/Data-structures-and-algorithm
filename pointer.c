#include <stdio.h>

int main( ){
    int a = 10;
    int *p;
    p = &a;
    printf("printing the addreses of a %d\n", p);
    printf("dereferencing to print the value of a %d", *p);

    return 0;
}