//PROGRAM TO DERTERMINE LIBRARY FINE RATES
/* 
PROGRAM TO DERTERMINE LIBRARY FINE RATES
AUTHOR :MBURU C JUSTINE THIGA 
DATE:28/09/2024
REGISTRATION NUMBER:CT101/G/21512/24
*/
//preprocessing directives scanf();printf();
#include <stdio.h>

int main() {
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate = 0;  
    int fineAmount;

    printf("Please enter your bookID: ");
    scanf("%d", &bookID);
    printf("Enter dueDate (integer): ");
    scanf("%d", &dueDate);
    printf("Enter returnDate (integer): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue > 0) {  
    if (daysOverdue < 7) {
    fineRate = 20;
    } else if (daysOverdue < 14) {
    fineRate = 50;
    } else if (daysOverdue >= 15) {
    fineRate = 100;
    }

    fineAmount = fineRate * daysOverdue;
    } else {
    daysOverdue = 0;
    fineAmount = 0;
    }

    printf("\nLIBRARY DATA\n");
    printf("bookID: %d\n", bookID);
    printf("dueDate: %d\n", dueDate);
    printf("returnDate: %d\n", returnDate);
    printf("daysOverdue: %d\n", daysOverdue);
    printf("fineRate (ksh/day): %.d\n", fineRate);
    printf("total fineAmount (ksh): %.d\n", fineAmount);

    return 0;
}
