#include <stdio.h>

const  double met= 0.001;

double convertToKm(double meters) {
    static int callCount = 0;  
    callCount++;

    printf("Function called %d time(s)\n", callCount);

    return meters * met;
}

int main() {
    double meters;
    for (int i = 0; i < 3; i++) {
        printf("Enter distance in meters: ");
        scanf("%lf", &meters);

        double km = convertToKm(meters);
        printf("%.1f meters = %.2f kilometers\n\n", meters, km);
    }

    return 0;
}

