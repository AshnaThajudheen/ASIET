#include <stdio.h>
int main() 
{
    int maxStacks, maxSize;
    printf("Enter the number of stacks: ");
    scanf("%d", &maxStacks);
    printf("Enter the maximum size for each stack: ");
    scanf("%d", &maxSize);
    int stacks[maxStacks][maxSize];
    int tops[maxStacks];
    for (int i = 0; i < maxStacks; i++) 
    {
        tops[i] = -1;
    }
    int choice, stackIndex, item;
    while (1) 
    {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Clear Console\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) 
        {
            printf("Enter stack index (0 to %d): ", maxStacks - 1);
            scanf("%d", &stackIndex);
            if (stackIndex < 0 || stackIndex >= maxStacks) 
            {
                printf("Invalid stack index. Please choose between 0 and %d.\n", maxStacks - 1);
                continue;
            }
        }
        switch (choice) 
        {
            case 1:
                if (tops[stackIndex] == maxSize - 1) 
                {
                    printf("Stack is full. Cannot push.\n");
                } 
                else 
                {
                    printf("Enter the item to push: ");
                    scanf("%d", &item);
                    tops[stackIndex]++;
                    stacks[stackIndex][tops[stackIndex]] = item;
                    printf("Pushed %d onto stack %d.\n", item, stackIndex);
                }
                break;
            case 2:
                if (tops[stackIndex] == -1) 
                {
                    printf("Stack is empty. Cannot pop.\n");
                } 
                else 
                {
                    printf("Popped %d from stack %d.\n", stacks[stackIndex][tops[stackIndex]], stackIndex);
                    tops[stackIndex]--;
                }
                break;

            case 3:
                if (tops[stackIndex] == -1) 
                {
                    printf("Stack is empty. Cannot peek.\n");
                } 
                else 
                {
                    printf("Top item of stack %d is %d.\n", stackIndex, stacks[stackIndex][tops[stackIndex]]);
                }
                break;
            case 4:
                if (tops[stackIndex] == -1) 
                {
                    printf("Stack %d is empty.\n", stackIndex);
                } 
                else 
                {
                    printf("Stack %d contents:\n", stackIndex);
                    for (int i = tops[stackIndex]; i >= 0; i--) 
                    {
                        printf("%d\n", stacks[stackIndex][i]);
                    }
                }
                break;
            case 5:
                printf("\e[1;1H\e[2J");
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please choose a number between 1 and 6.\n");
        }
    }
    return 0;
}

