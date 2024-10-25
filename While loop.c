//PROGRAM FOR WHILE LOOP
/*AUTHOR ;MBURU C JUSTINE THIGA 
REGISTRATION NUMBER ;CT101/G/21512/24
DATE;08/10/24
*/
//preprocessing directives scanf("");printf("");
int main() {
    int start, stop, sum,i=0;

    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the stop value: ");
    scanf("%d", &stop);

    sum = start; 
    i = start;

    while (i > stop) {
        printf("%d \n", i);
        i--;
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
