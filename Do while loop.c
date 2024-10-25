//PROGRAM FOR DO WHILE LOOP
/*AUTHOR ;MBURU C JUSTINE THIGA 
REGISTRATION NUMBER ;CT101/G/21512/24
DATE;8/10/2024
*/
//preprocessing directives scanf(),printf()
#include <stdio.h>
int main() {
    int sum = 0;
    int start;
    int stop;
    int i=0;

    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the stop value: ");
    scanf("%d", &stop);
    
    i=start;

    do {
        printf("%d\n",i); 
        sum += start; 
        i++; 
    } while (i <= stop);

    printf("The sum is %d\n", sum); 
    return 0;
}
