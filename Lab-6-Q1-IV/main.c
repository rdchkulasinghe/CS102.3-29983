#include <stdio.h>

// Function to input elements of the array
void input_array(int array[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// Function to print the array in reverse order
void print_reverse(int array[], int size) {
    printf("Array in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size = 10;
    int array[size];

    // Get user input for the array elements
    input_array(array, size);

    // Print the array in reverse order
    print_reverse(array, size);

    return 0;
}
