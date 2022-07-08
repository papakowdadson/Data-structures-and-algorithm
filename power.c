#include <stdio.h>

int power(int m, int n)
{
    if (n== 0)
        {
            return 1;
        }
    else
    {
        return power(m, n - 1) * m;
    }
}

int main()
{
    int s = power(3, 2);
    printf("%d", s);

        return 0;
}