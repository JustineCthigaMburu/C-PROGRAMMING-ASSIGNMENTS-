//FUNCTIONS FOR ELECTRIC BILL 
/*ELECTRIC BILL FUNCTIONS 
AUTHOR ;MBURU C JUSTINE THIGA 
REGISTRATION NUMBER ;CT101/G/21512/24
DATE;15/10/2024
*/

#include <stdio.h>
getCustomerDetails(int *customer_ID, char consumer_Name[], float *units_consumed) {
    printf("Enter customer ID: ");
    scanf("%d", customer_ID);
    printf("Enter consumer name: ");
    scanf("%s", consumer_Name); 
    printf("Enter units consumed: ");
    scanf("%f", units_consumed);
}

float calculateChargesPerUnit(float units_consumed) {
    if (units_consumed <= 199) {
        return 1.20;
    } else if (units_consumed <= 399) {
        return 1.50;
    } else if (units_consumed <= 599) {
        return 1.80;
    } else {
        return 2.00;
    }
}

float calculateTotalAmount(float units_consumed, float charges_Per_Unit) {
    float total_amount = charges_Per_Unit * units_consumed;
    float minimum_bill = 100.00;
    float surcharge_rate = 0.15;

    if (total_amount > 400) {
        total_amount += total_amount * surcharge_rate;  
    }
    
    if (total_amount < minimum_bill) {
        total_amount = minimum_bill;  
    }

    return total_amount;
}

printBill(int customer_ID, char consumer_Name[], float units_consumed, float charges_Per_Unit, float total_amount_to_pay) {
    printf("\nCustomer ID: %d\n", customer_ID);
    printf("Consumer Name: %s\n", consumer_Name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Charges Per Unit: %.2f\n", charges_Per_Unit);
    printf("Total Amount to Pay: %.2f\n", total_amount_to_pay);
}

int main() {
    int customer_ID;
    char consumer_Name[50]; 
    float units_consumed;
    
    getCustomerDetails(&customer_ID, consumer_Name, &units_consumed);
    
    float charges_Per_Unit =calculateChargesPerUnit(units_consumed);
    float total_amount_to_pay =calculateTotalAmount(units_consumed, charges_Per_Unit);
    
    printBill(customer_ID, consumer_Name, units_consumed, charges_Per_Unit, total_amount_to_pay);

    return 0;
}
