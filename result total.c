#include <stdio.h>

int main()

{

float eng, phy, chem, math, comp;

float total, average, percentage;

/* Input marks of all five subjects */

printf("Enter marks of five subjects: \n");

scanf("%f%f%f%f%f", &phy, &eng, &chem, &math, &comp);

/* Calculate total, average and percentage */

total = phy + eng + chem + math + comp;

percentage = (total / 500.0) * 100;

/* Print all results */

printf("Total marks = %.2f\n", total);

printf("Percentage = %.2f", percentage);

return 0;

}
