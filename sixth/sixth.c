#include <stdio.h>
main()
{
     float a, b, sum, avg;
     printf("Enter the value of a and b: ");
     scanf("%f%f", &a, &b);
     sum = a + b;
     avg = sum / 2;
     printf("Sum: %.2f\nAverage: %.2f", sum, avg);
     return 0;
}
