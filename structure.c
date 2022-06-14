#include <stdio.h>
struct Rectangle
    {
        int length;
        int breath;
    };
int main(void)
{
    struct Rectangle r;
    r.breath = 10;
    r.length = 2;
    printf("the area of a reactangle is %d",r.breath*r.length);
    return 0;
  

}