// Swap the values of the variables using pointers
#include <stdio.h>

int main() {
    int x = 9; 
    int y = 3;
    int *ptr1 = &x; 
    int *ptr2 = &y; 

    printf("Before swapping: x = %d, y = %d\n", x, y);


    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}