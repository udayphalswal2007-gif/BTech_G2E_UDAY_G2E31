#include<stdio.h>
#include<math.h>
int main(){
    float principal, interest, time, SI, CI;
printf("enter the principal amount\n");
scanf("%f", &principal);
printf("enter the rate of interest\n");
scanf("%f", &interest);
printf("enter the time(in year)\n");
scanf("%f", &time);
SI=(principal*interest*time)/100;
CI=principal*pow((1+interest/100),time)-principal;
printf("\n simple interest=%.2f", SI);
printf("\n compound interest=%.2f", CI);
return 0;   
}