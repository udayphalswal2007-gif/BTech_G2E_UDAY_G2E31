#include<stdio.h>
#define PI 3.14
int main(){
    float area, radius, cir;
    printf("enter the radius of a circle\n");
    scanf("%f", &radius);
    area= PI*radius*radius;
    cir= 2*PI*radius;
    printf("\n area of circle=%.2f", area);
    printf("\n circumference of circle=%.2f", cir);
    return 0;

}