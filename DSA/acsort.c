#include<stdio.h>

int main(){

    int arr[100],  n, i, j, temp;

    printf("Enter the Array Size :");
    scanf("%d", &n);

    printf("\nEnter the Elements of Array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // 0 - n
    }
    
    // Ascending Sort 

    // n = 5       n - 1   -> 5 - 1 = < 4
    // 0 1 2 3 

    for (i = 0; i < n - 1; i++)    // 0  -> index    // 1 
    {
        // 0 1 2 3 4 
        for (j = i + 1; j < n; j++)   // 0 + 1  -> index    // 1 + 1 = 2 
        {
            // comper 
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }   
    }
    
    printf("Array in Ascending Ordered :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // 0 - n
    }
}