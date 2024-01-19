#include<stdio.h>
int main()
{
    int arr[] = {2, 4, 5, 14, 7, 6, 9};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    int count2 = 0, count3 = 0, count5 = 0, count7 = 0;
    for ( i = 0; i < size; i++)
    // use of for loop is to check every element//
     {
        if (arr[i] % 2 == 0) {
            count2++;
            // count++ to count the for loop// and one more important is why i have used count2,count3,coun4, beacuse to diifereante each other//
        }
        if (arr[i] % 3 == 0) {
            count3++;
        }
        if (arr[i] % 5 == 0) {
            count5++;
        }
        if (arr[i] % 7 == 0) {
            count7++;
        }
    }
    printf("\ndivisible by 2: %d numbers\n", count2);
    printf("divisible by 3: %d numbers\n", count3);
    printf("divisible by 5: %d numbers\n", count5);
    printf("divisible by 7: %d numbers\n", count7);

    return 0;
}

