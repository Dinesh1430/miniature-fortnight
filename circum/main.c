#include <stdio.h>
#include <math.h>
#define pi 3.14


int main()
{

    float radius,distance,sum;

    printf("This program computer the volume of cylinder\n");
    printf("radius\n");
    scanf("%f", &radius);
    printf("distance\n");
    scanf("%f", &distance);
    sum = pi*pow(radius,2)*(200-distance);
    printf("\n\n the volume of cylinder is %1.f m3 ",sum);

    return (0);
}
