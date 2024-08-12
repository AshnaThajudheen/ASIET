#include <stdio.h>

int main() {
    int a[50], i, j, temp, num;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the elements of the array: ");
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The Sorted array is: ");
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

    
