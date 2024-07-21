#include <stdio.h> 

/* Function to sort an array with insertion sort */ 
void insert(int a[], int n) 
{ 
    int i, j, temp; 
    for (i = 1; i < n; i++) 
    { 
        temp = a[i]; 
        j = i - 1; 

        /* Move the elements greater than temp to one position ahead from their current position */ 
        while (j >= 0 && temp < a[j]) 
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = temp; 
    } 
} 

void printArr(int a[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
    } 
    printf("\n"); // Add newline for better formatting
} 

int main() 
{ 
    int a[] = {12, 31, 25, 8, 32, 17}; 
    int n = sizeof(a) / sizeof(a[0]); 
    printf("Before sorting, array elements are:\n"); 
    printArr(a, n); 
    insert(a, n); 
    printf("After sorting, array elements are:\n"); 
    printArr(a, n); 
    return 0; 
}

/tmp/TQi2SHazv6.o
Before sorting, array elements are:
12 31 25 8 32 17 
After sorting, array elements are:
8 12 17 25 31 32 


=== Code Execution Successful ===