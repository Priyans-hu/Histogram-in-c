#include <stdio.h>

void generateHistogram(int arr[], int size, int barWidth, int scale) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    int scaledMaxVal = maxVal / scale;

    for (int level = scaledMaxVal; level > 0; level--) {
        for (int i = 0; i < size; i++) {
            int scaledValue = arr[i] / scale;
            if (scaledValue >= level) {
                for (int w = 0; w < barWidth; w++) {
                    printf("*");
                }
            } else {
                for (int w = 0; w < barWidth; w++) {
                    printf(" ");
                }
            }
            printf(" ");
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        for (int w = 0; w < barWidth; w++) {
            printf("-");
        }
        printf(" ");
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("%*d ", barWidth, arr[i]);
    }
    printf("\n");
}
