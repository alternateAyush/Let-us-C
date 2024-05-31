#include <stdio.h>

// Function to print a 2D array
void print2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to modify a 2D array
void modify2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] += 1; // Example modification: increment each element by 1
        }
    }
}

int main() {
    int rows = 3;
    int cols = 3;
    
    // Initialize a 2D array
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original array:\n");
    print2DArray(rows, cols, array);

    // Modify the array
    modify2DArray(rows, cols, array);

    printf("Modified array:\n");
    print2DArray(rows, cols, array);

    return 0;
}
