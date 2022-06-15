#include <stdio.h>

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the swapped values are %d %d",a,b);
}

int main(){
    int x =10 ;
    int y = 15;
    printf("original numbers are %d %d\n",x ,y);
    swap(10,15);


    return 0;
}