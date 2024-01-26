#include<stdio.h>
int main() {
  int arr[] = {60, 30, 20, 50, 10, 20, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i,j;
  for (i = 0; i < n - 1; i++)
  //  loop will run as long as i is less than n - 1.
    for (j = 0; j < n - i - 1; j++)
    // checking each element for proprer sorting
      if (arr[j] > arr[j + 1])
      // checking whetheer the left side is grater or not and out of order and needs swaping//
       {
        int temp = arr[j];      // stores the current value in temp to later use during swaping
        arr[j] = arr[j + 1];   // it shifts the larger value means stores//
        arr[j + 1] = temp;     // it compltes the swaping and place the smaller value to the left//
      }
  for ( i = 0; i < n; i++)
  // it places the largest elmenet which we have stored in temp at the postion j+1 and completing the swap
  printf("%d ", arr[i]);
  return 0;
}