#include <stdio.h>
#include "histogram_generator.h"

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int barWidth = 5; 
    
    int scale;
    printf("Enter the Scale(unit length of bar for large values): ");
    scanf("%d", &scale);

    generateHistogram(arr, size, barWidth, scale);
    return 0;
}
