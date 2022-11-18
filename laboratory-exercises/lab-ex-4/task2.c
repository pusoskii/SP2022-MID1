#include <stdio.h>

int main() {
    int numberOfPairs, PM10, PM2_5, PM10Total, PM2_5Total, outOfUseStations;
    scanf("%d", &numberOfPairs);

    PM10Total = 0;
    PM2_5Total = 0;
    outOfUseStations = 0;

    for (int i = 0; i < numberOfPairs; i++) {
        scanf("%d%d", &PM10, &PM2_5);

        if (PM10 == -1 && PM2_5 == -1) {
            outOfUseStations++;
            continue;
        }

        PM10Total += PM10;
        PM2_5Total += PM2_5;
    }

    if (outOfUseStations == numberOfPairs) {
        printf("PM10: Can not be calculated\n");
        printf("PM2.5: Can not be calculated");
    } else {
        printf("PM10: %.2f\n", (float) PM10Total / (numberOfPairs - outOfUseStations));
        printf("PM2.5: %.2f", (float) PM2_5Total / (numberOfPairs - outOfUseStations));
    }

    return 0;
}