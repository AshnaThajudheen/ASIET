#include <stdio.h>

void main() {
    int T1[50][3], T2[50][3], Sum[50][3];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter the number of non-zero elements in T1: ");
    scanf("%d", &m);
    printf("Enter the elements of T1 (format: row col value):\n");
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &T1[i][0], &T1[i][1], &T1[i][2]);
    }

    printf("Enter the number of non-zero elements in T2: ");
    scanf("%d", &n);
    printf("Enter the elements of T2 (format: row col value):\n");
    for (j = 0; j < n; j++) {
        scanf("%d %d %d", &T2[j][0], &T2[j][1], &T2[j][2]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (T1[i][0] < T2[j][0] || (T1[i][0] == T2[j][0] && T1[i][1] < T2[j][1])) {
            Sum[k][0] = T1[i][0];
            Sum[k][1] = T1[i][1];
            Sum[k][2] = T1[i][2];
            i++;
            k++;
        } else if (T1[i][0] > T2[j][0] || (T1[i][0] == T2[j][0] && T1[i][1] > T2[j][1])) {
            Sum[k][0] = T2[j][0];
            Sum[k][1] = T2[j][1];
            Sum[k][2] = T2[j][2];
            j++;
            k++;
        } else {
            Sum[k][0] = T1[i][0];
            Sum[k][1] = T1[i][1];
            Sum[k][2] = T1[i][2] + T2[j][2];
            i++;
            j++;
            k++;
        }
    }

    while (i < m) {
        Sum[k][0] = T1[i][0];
        Sum[k][1] = T1[i][1];
        Sum[k][2] = T1[i][2];
        i++;
        k++;
    }

    while (j < n) {
        Sum[k][0] = T2[j][0];
        Sum[k][1] = T2[j][1];
        Sum[k][2] = T2[j][2];
        j++;
        k++;
    }

    printf("Resultant Sparse Matrix (Tuple Form):\n");
    for (int x = 0; x < k; x++) {
        printf("%d %d %d\n", Sum[x][0], Sum[x][1], Sum[x][2]);
    }
}

