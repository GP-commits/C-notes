#include <stdio.h>
int main()
{
    double unitConsumed, rateA=0.5,rateB=0.75,rateC=1.20,rateD=1.50;
    printf("enter unit consumed to get bill: ");
    scanf("%lf",&unitConsumed);
    if(unitConsumed<=50){
    printf("the total bill amount is : %.2lf",rateA*unitConsumed);
    }
    else if(unitConsumed<=75){
    printf("the total bill amount is : %.2lf",rateB*unitConsumed);
    }
    else if(unitConsumed<=90){
    printf("the total bill amount is : %.2lf",rateC*unitConsumed);
    }
    else(unitConsumed<=110){
    printf("the total bill amount is : %.2lf",rateD*unitConsumed);
    }
    return 0;
}