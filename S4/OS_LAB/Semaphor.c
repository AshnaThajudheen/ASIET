#include <stdio.h>
#include <stdlib.h>

int mutex = 1, full = 0, empty = 3, x = 0;

int signal(int s) {
    return (++s);
}

int wait(int s) {
    return (--s);
}

void producer() {
    empty = wait(empty);
    mutex = wait(mutex);
    
    printf("Producer produces item %d\n", x);
    x++;

    mutex = signal(mutex);
    full = signal(full);
}

void consumer() {
    full = wait(full);
    mutex = wait(mutex);
    
    printf("Consumer consumes item %d\n", x - 1);
    x--;

    mutex = signal(mutex);
    empty = signal(empty);
}

int main() {
    int n;
    while (1) {
        printf("\n1. PRODUCER\n2. CONSUMER\n3. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                if (mutex == 1 && empty != 0) {
                    producer();
                } else {
                    printf("BUFFER IS FULL\n");
                }
                break;
            case 2:
                if (mutex == 1 && full != 0) {
                    consumer();
                } else {
                    printf("BUFFER IS EMPTY\n");
                }
                break;
            case 3:
                exit(0);
            default:
                printf("INVALID CHOICE\n");
        }
    }
    return 0;
}
