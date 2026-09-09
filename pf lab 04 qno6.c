#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month) {

        // Months with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month %d has 31 days\n", month);
            break;

        // February
        case 2:
            if ((year % 400 == 0) || 
                (year % 4 == 0 && year % 100 != 0)) {
                printf("February %d has 29 days\n", year);
            } else {
                printf("February %d has 28 days\n", year);
            }
            break;

        // Months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month %d has 30 days\n", month);
            break;

        default:
            printf("Error: Invalid month number\n");
    }

    return 0;
}
