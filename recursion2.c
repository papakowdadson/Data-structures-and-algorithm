# include <stdio.h>
int fun(int n){
    static int c=0;
    if (n > 0){
        c++;
         return fun(n-1)+c;
    }
    return 0;
}


int main(){
    int x = 5;
    printf("%d",fun(x));
    return 0;
}