#include <stdio.h>
int main() {
    int arr[] = {1, 2, 5, 0, -5};  
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;// intizalize the element to store//
    for ( i = 0; i < n; i++) 
    // for loop is for adding the each element//
    {
        sum += arr[i];  // Adding each element to the sum//
    }
    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}
