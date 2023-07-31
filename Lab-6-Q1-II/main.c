#include <stdio.h>

// Function to input elements of the array
void input_array(int array[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// Function to find the maximum value in the array
int find_maximum(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int size = 10;
    int array[size];

    // Get user input for the array elements
    input_array(array, size);

    // Find the maximum value in the array
    int maximum = find_maximum(array, size);

    // Display the maximum value
    printf("Maximum value in the array: %d\n", maximum);

    return 0;
}
