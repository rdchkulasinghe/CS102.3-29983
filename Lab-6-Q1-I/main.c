#include <stdio.h>

// Function to input elements of the array
void input_array(int array[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// Function to find the minimum value in the array
int find_minimum(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int size = 10;
    int array[size];

    // Get user input for the array elements
    input_array(array, size);

    // Find the minimum value in the array
    int minimum = find_minimum(array, size);

    // Display the minimum value
    printf("Minimum value in the array: %d\n", minimum);

    return 0;
}
