#include<stdio.h>

int main(){

    int arr[2][2] = {
        {1, 2}, 
        {3, 4}
    };

    // 2 -> row 
    // 2 -> col 
    // total value -> 4


    printf("\nDisplay 2D array !!! \n");
    for (int i = 0; i < 2; i++)   // 0 1
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    


}