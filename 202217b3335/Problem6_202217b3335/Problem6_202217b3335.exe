#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, a[10], b[10], t[10], w[10], g[10], i;
    float att = 0, awt = 0;

    for (i = 0; i < 10; i++) {
        a[i] = 0; b[i] = 0; w[i] = 0; g[i] = 0;
    }

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    printf("Enter the arrival times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    g[0] = 0; 
    for (i = 0; i < n; i++) {
        g[i+1] = g[i] + b[i];
    }

    for (i = 0; i < n; i++) {
        w[i] = g[i] - a[i];
        t[i] = g[i+1] - a[i];
        awt += w[i];
        att += t[i];
    }

    awt /= n;
    att /= n;

    printf("\n\tProcess\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("\tp%d\t\t%d\t\t%d\n", i+1, w[i], t[i]);
    }

    printf("The average waiting time is %.2f\n", awt);
    printf("The average turnaround time is %.2f\n", att);
}

/tmp/oRdbUPVrm0.o
Enter the number of processes: 3
Enter the burst times:
0.5
Enter the arrival times:

	Process	Waiting Time	Turnaround Time
	p1		0		0
	p2		0		0
	p3		0		0
The average waiting time is 0.00
The average turnaround time is 0.00


=== Code Exited With Errors ===