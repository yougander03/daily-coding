#include <stdio.h>
int main() {
    int n = 6; 
    int arr[] = {1, 2, 3, 4, 5, 6};
    int B[n];
    for (int i = 0; i < n;i++) {
        B[i] = 0;
    }
    int even = 0, odd = n - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            B[even++] = arr[i];
        } else {
            B[odd--] = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
