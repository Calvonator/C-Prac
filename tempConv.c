#include <stdio.h>
#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

main()
{
    /*
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    *//* Can be written as the following: */


    
    float fahr;

    printf("%3s\t%6s\n\n", "Fahr", "Celcius");

    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32.0));
    }
    printf("Hello, world\n");

}

