#include <stdio.h>
// 2D array
int main()
{
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 8, 7, 6}};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
        printf("you must keep moving");
    }
}