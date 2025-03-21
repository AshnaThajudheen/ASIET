#include <stdio.h>

void main() 
{
    int p[20], wt[20], bt[20], tt[20], n, temp;
    float wt_avg = 0, tt_avg = 0;
    printf("Enter the number of Processes: ");
    scanf("%d", &n);
    printf("\nEnter the Burst Time of Each Process :\n");
    for (int i = 0; i < n; i++) 
    {
        p[i] = i + 1;
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (bt[i] > bt[j]) 
            {
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
    for (int i = 1; i < n; i++) 
    {
        wt[i] = wt[i - 1] + bt[i - 1];
        wt_avg += wt[i];
    }

    wt_avg /= n;

    for (int i = 0; i < n; i++) 
    {
        tt[i] = wt[i] + bt[i];
        tt_avg += tt[i];
    }

    tt_avg /= n;

    printf("\nProcess\t\t Burst Time\t\t Waiting Time\t\t Turnaround Time\n");
    for (int i = 0; i < n; i++) 
    {
        printf("P%d\t\t\t%d\t\t\t%d\t\t\t%d\n", p[i], bt[i], wt[i], tt[i]);
    }

    printf("\nGantt Chart:\n\n");
    printf("----");
    for (int i = 0; i < n; i++) 
    {
        printf("-------");
    }
    printf("\n");
    for (int i = 0; i < n; i++) 
    {
        printf("|  P%d  ", p[i]);
    }
    printf("|\n");
    printf("----");
    for (int i = 0; i < n; i++) {
        printf("-------");
    }
    printf("\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d      ", wt[i]);
    }
    printf("%d", tt[n - 1]);
    printf("\n");
    printf("----");
    for (int i = 0; i < n; i++) {
        printf("-------");
    }
    printf("\n");
    printf("Average tt = %f \n", tt_avg);
    printf("Average wt = %f\n", wt_avg);
}

