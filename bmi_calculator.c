//Author: Jibanesh Jana, 03-10-2024
/*Determine the BMi*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{;
    float h, w, bmi;
    printf("Enter your height(M) and weight(KG):\n");
    scanf("%f%f", &h, &w);
    bmi = w / pow(h, 2);
    if (bmi < 15)
    {
        printf("Starvation\n");
    }
    else if (bmi > 15.1 && bmi < 17.5)
    {
        printf("Anorexic\n");
    }
    else if (bmi > 17.6 && bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi > 18.6 && bmi < 24.9)
    {
        printf("Ideal\n");
    }
    else if (bmi > 25 && bmi < 25.9)
    {
        printf("Overweight\n");
    }
    else if (bmi > 30 && bmi < 30.9)
    {
        printf("Obese\n");
    }
    else if (bmi >= 40)
    {
        printf("Morbidly Obese\n");
    }
    else
        printf("Out of index\n");
    printf("%f", bmi);
    return 0;
}
