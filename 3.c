#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i;
    int *ptr = arr + n - 1;

    printf("Reversed array: \n");
    for(i = 0; i < n; i++) {
        printf("%d\t", *ptr);
        ptr--;
    }

    return 0;
}