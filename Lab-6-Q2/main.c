#include <stdio.h>

// Function to get array elements from the user
void get_array_input(int array[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// Function to calculate scalar sum of an array
int scalar_sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

// Function to calculate vector sum of two arrays and store in third array
void vector_sum(int array1[], int array2[], int vector_sum_array[], int size) {
    for (int i = 0; i < size; i++) {
        vector_sum_array[i] = array1[i] + array2[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vector_sum_array[size];

    // Get user input for array elements
    printf("For the first array:\n");
    get_array_input(array1, size);
    printf("For the second array:\n");
    get_array_input(array2, size);

    // Calculate scalar sum
    int scalar_result = scalar_sum(array1, size) + scalar_sum(array2, size);

    // Calculate vector sum
    vector_sum(array1, array2, vector_sum_array, size);

    // Display results
    printf("\nScalar Sum (sum of all elements in both arrays): %d\n", scalar_result);
    printf("Vector Sum (sum of corresponding elements in both arrays):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vector_sum_array[i]);
    }
    printf("\n");

    return 0;
}
