#include <stdio.h>
#include <stdlib.h>

#define N 5

void insert(int queue[], int *rear, int *front);
void delete(int queue[], int *rear, int *front);
void display(int queue[], int rear, int front);

int main() {
    int queue[N];
    int choice = 1, front = 0, rear = 0;

    printf("Queue using Array\n");
    printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
    while (choice) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert(queue, &rear, &front);
                break;
            case 2:
                delete(queue, &rear, &front);
                break;
            case 3:
                display(queue, rear, front);
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice: please see the options.\n");
                break;
        }
    }
    return 0;
}

void insert(int queue[], int *rear, int *front) {
    if (*rear == N) {
        printf("\nQueue is Full\n");
    } else {
        int num;
        printf("\nEnter number: ");
        scanf("%d", &num);
        queue[(*rear)++] = num;
    }
}

void delete(int queue[], int *rear, int *front) {
    if (*front == *rear) {
        printf("\nQueue is Empty\n");
    } else {
        printf("\nDeleted Element is %d\n", queue[(*front)++]);
    }
}

void display(int queue[], int rear, int front) {
    if (front == rear) {
        printf("\nQueue is Empty\n");
    } else {
        printf("\nQueue Elements are:\n");
        for (int i = front; i < rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

/tmp/pKFOFD7NMR.o
Queue using Array
1. Insertion
2. Deletion
3. Display
4. Exit

Enter your choice: 1

Enter number: 56

Enter your choice: 1

Enter number: 90

Enter your choice: 1

Enter number: 67

Enter your choice: 1

Enter number: 23

Enter your choice: 3

Queue Elements are:
56
90
67
23

Enter your choice: 2

Deleted Element is 56

Enter your choice: 3

Queue Elements are:
90
67
23

Enter your choice: 