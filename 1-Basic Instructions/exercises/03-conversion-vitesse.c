#include <stdio.h>

int main() {
    float speed_kmh, speed_ms;

    printf("Enter speed in km/h: ");
    scanf("%f", &speed_kmh);

    speed_ms = speed_kmh * 0.27778;

    printf("Speed in m/s: %.2f\n", speed_ms);

    return 0;
}
