#include <stdio.h>

// Function to input elements of the array
void input_array(int array[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// Function to calculate the average value of the array
float calculate_average(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (float)sum / size;
}

int main() {
    int size = 10;
    int array[size];

    // Get user input for the array elements
    input_array(array, size);

    // Calculate the average value of the array
    float average = calculate_average(array, size);

    // Display the average value
    printf("Average value of the array: %.2f\n", average);

    return 0;
}
