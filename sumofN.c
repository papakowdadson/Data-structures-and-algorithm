#include <stdio.h>
// suming natural numbers with recursion

int sum(int n)
{
    if (n > 0)
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    int x = 5;
    printf("%d", sum(x));
    return 0;
}