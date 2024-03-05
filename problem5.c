#include <stdio.h>
int main() {
  int arr[] = {1, -2, 0,3,-4,5};
  int size = sizeof(arr) / sizeof(arr[0]); 
  int positivenumbers = 0;
  int negativenumbers = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 0) {
      positivenumbers++;
    } else if (arr[i] < 0) {
      negativenumbers++;
    }
  }
  printf("%d\n", positivenumbers);
  printf("%d\n", negativenumbers);
  return 0;
}
