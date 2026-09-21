#include <stdio.h>
int main()
{
    // r  c
    int a[2][3] = {

        {1, 2, 3},
        {4, 5, 6}};

    int b[2][3] = {

        {7, 8, 9},
        {10, 11, 12}};

    int c[4][6];
    int i, j;

    // copy the First array
    for (int i = 0; i < 2; i++) // row
    {
        for (int j = 0; j < 3; j++) // cols
        {
            c[i][j] = a[i][j];
        }
    }
    // 2nd array
    for (int i = 0; i < 2; i++) // row
    {
        for (int j = 0; j < 3; j++) // cols
        {
            c[i + 2][j] = b[i][j];
        }
    }

    // display
    for (int i = 0; i < 4; i++) // row
    {
        for (int j = 0; j < 3; j++) // cols
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}