#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
    }
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
