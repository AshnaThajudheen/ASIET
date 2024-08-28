#include <stdio.h>
void main() 
{
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int l = 0;
    int r = n - 1;
    int flag = 0;
    while (l <= r) 
    {
        int m = l + (r - l) / 2;
        
        if (arr[m] == key) 
        {
            printf("The element %d found at index %d\n", key, m);
            flag = 1;
            break;
        }
        
        if (arr[m] < key) 
        {
            l = m + 1;
        } 
        else 
        {
            r = m - 1;
        }
    }
    
    if (flag == 0) 
    {
        printf("The element not Found\n");
    }
}

