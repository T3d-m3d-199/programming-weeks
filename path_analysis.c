#include <stdio.h>

int main() {
    int height;
    int age;
    int hasAdult;   // 1 = yes, 0 = no
    int medicalClearance;   // 1 = yes, 0 = no
    int hasVipPass;   // 1 = yes, 0 = no
    printf("Enter height (in inches): ");
    scanf("%d", &height);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Has adult? (1/0): ");
    scanf("%d", &hasAdult);
    printf("Has medical clearance? (1/0): ");
    scanf("%d", &medicalClearance);
    printf("Has VIP pass? (1/0): ");
    scanf("%d", &hasVipPass);
    int canRide = (height >= 48) &&
                    (age >= 12 || hasAdult) &&
                    (age <= 65 || medicalClearance) ||
                    hasVipPass;
    if (canRide) {
        printf("You can ride!\n");
    } else {
        printf("Sorry, you cannot ride.\n");
    }

    return 0;
}

//gcc ride_eligibility.c -o ride_eligibility
//./ride_eligibility
