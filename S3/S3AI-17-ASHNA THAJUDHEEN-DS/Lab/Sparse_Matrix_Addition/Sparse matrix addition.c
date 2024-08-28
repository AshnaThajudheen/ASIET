#include <stdio.h>
void main() {
    int T1[50][50], T2[50][50], Sum[50][50];
    int i = 0, j = 0, k = 0, count = 0;
    int m, n;

    printf("Enter the number of elements in T1: ");
    scanf("%d", &m);
    printf("Enter the elements of T1 (format: x y value):\n");
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &T1[i][0], &T1[i][1], &T1[i][2]);
    }

    printf("Enter the number of elements in T2: ");
    scanf("%d", &n);
    printf("Enter the elements of T2 (format: x y value):\n");
    for (j = 0; j < n; j++) {
        scanf("%d %d %d", &T2[j][0], &T2[j][1], &T2[j][2]);
    }

    i = 0;
    j = 0;
    while (i < m && j < n) {
        if (T1[i][0] < T2[j][0]) {
            Sum[k][0] = T1[i][0];
            Sum[k][1] = T1[i][1];
            Sum[k][2] = T1[i][2];
            i++;
            k++;
            count++;
        } else if (T1[i][0] > T2[j][0]) {
            Sum[k][0] = T2[j][0];
            Sum[k][1] = T2[j][1];
            Sum[k][2] = T2[j][2];
            j++;
            k++;
            count++;
        } else {
            if (T1[i][1] == T2[j][1]) {
                Sum[k][0] = T1[i][0];
                Sum[k][1] = T1[i][1];
                Sum[k][2] = T1[i][2] + T2[j][2];
                i++;
                j++;
                k++;
                count++;
            } else if (T1[i][1] < T2[j][1]) {
                Sum[k][0] = T1[i][0];
                Sum[k][1] = T1[i][1];
                Sum[k][2] = T1[i][2];
                i++;
                k++;
                count++;
            } else {
                Sum[k][0] = T2[j][0];
                Sum[k][1] = T2[j][1];
                Sum[k][2] = T2[j][2];
                j++;
                k++;
                count++;
            }
        }
    }

    while (i < m) {
        Sum[k][0] = T1[i][0];
        Sum[k][1] = T1[i][1];
        Sum[k][2] = T1[i][2];
        i++;
        k++;
        count++;
    }

    while (j < n) {
        Sum[k][0] = T2[j][0];
        Sum[k][1] = T2[j][1];
        Sum[k][2] = T2[j][2];
        j++;
        k++;
        count++;
    }

    printf("Resultant Matrix:\n");
    for (int x = 0; x < count; x++) {
        printf("%d %d %d\n", Sum[x][0], Sum[x][1], Sum[x][2]);
    }
}

