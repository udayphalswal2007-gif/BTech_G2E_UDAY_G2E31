#include<stdio.h>
#include<math.h>
int main(){
    float area, height, base;
    printf("enter the value of base \n");
    scanf("%f", &base);
    printf("enter the value of height \n");
    scanf("%f", &height);
    area= 0.5*base*height;
    printf("\n area of triangle=%.2f", area);
    return 0;

}