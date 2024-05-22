#include <stdio.h>

int main() {
    int arr[] = {2, 4, 5, 6, 8, 15}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i;
    int *ptr = arr; 
    printf("Squares of array elements: \n");
    for(i = 0; i < n; i++) {
        printf("%d\t", *(ptr + i) * *(ptr + i)); 
    }

    return 0;
}