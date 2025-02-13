#include <stdio.h>

void main() {
    float wt_avg = 0, tt_avg = 0;
    int p[20], bt[20], wt[20], tt[20], n, i, j;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the burst time of processes\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        p[i] = i + 1;
        scanf("%d", &bt[i]);
    }

    int temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (bt[i] > bt[j]) {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    wt[0] = 0;  
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        wt_avg += wt[i];
    }
    wt_avg = wt_avg / n; 
    for (i = 0; i < n; i++) {
        tt[i] = bt[i] + wt[i];
        tt_avg += tt[i];
    }
    tt_avg = tt_avg / n; 
    printf("\nGantt Chart:\n\n");
    printf("----");
    for (i = 0; i < n; i++) {
        printf("-------");
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("|  P%d  ", p[i]);
    }
    printf("|\n");
    printf("----");
    for (i = 0; i < n; i++) {
        printf("-------");
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d      ", wt[i]);
    }
    printf("%d", tt[n - 1]);
    printf("\n");
    printf("----");
    for (i = 0; i < n; i++) {
        printf("-------");
    }
    printf("\n");
    printf("Average Waiting Time = %f\n", wt_avg);
    printf("Average Turnaround Time = %f\n", tt_avg);
}

