#include <stdio.h>

/* converts Celsius to Fahrenheit */
main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius\t   Farh\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%7.0f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}