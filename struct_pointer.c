#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    int lenght;
    int width;

};

int main(){
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(int));
    p ->lenght = 10;
    p ->width =  2;
    printf("%d",p ->lenght * p ->width);
    free(p);
}
