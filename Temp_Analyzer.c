#include <stdio.h>

#define NUM_DAYS 7

int main() {
    int temperatures[NUM_DAYS];
    int i;
    int sum = 0;
    int maxTemp, minTemp;

    // Enter input
    printf("Enter temperatures for each day of the week:\n");
    for (i = 0; i < NUM_DAYS; i++) {
        printf("Enter temperature %d: ", i + 1);
        scanf("%d", &temperatures[i]);
        sum += temperatures[i];
    }

    // Average Temperature
    double average = (double)sum / NUM_DAYS;

    // Find maximum temperature
    maxTemp = temperatures[0];
    for (i = 1; i < NUM_DAYS; i++) {
        if (temperatures[i] > maxTemp) {
            maxTemp = temperatures[i];
        }
    }

    // Find minimum temperature
    minTemp = temperatures[0];
    for (i = 1; i < NUM_DAYS; i++) {
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
        }
    }

    // Output
    printf("\nAverage temperature for the week: %.2f\n", average);

    // Output the highest temperature
    printf("Highest temperature for the week: %d\n", maxTemp);

    // Output the lowest temperature
    printf("Lowest temperature for the week: %d\n", minTemp);

    return 0;
}
