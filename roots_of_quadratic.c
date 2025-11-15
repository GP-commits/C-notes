#include <stdio.h>
#include <math.h>
int main(){
    int b,a,c;
    float root1,root2;
    printf("enter value of a: ");
    scanf("%d",&a);
     printf("enter value of b: ");
    scanf("%d",&b);
     printf("enter value of c: ");
    scanf("%d",&c);
     float discremenant=b*b-4*a*c;
    //calculation
    if(discremenant>0){
    root1=(-b+sqrt(discremenant))/(2*a);
    root2=(-b-sqrt(discremenant))/(2*a);
    printf("the roots of the quadratic equation are %.2f and %.2f",root1,root2);
    }
    else if(discremenant == 0){
        root1=(-b)/(2*a);
        root2=(b)/(2*a);
        printf("the roots of the quadratic equation are %.2f and %.2f",root1,root2);
    }
    else{
        root1=(-b)/(2*a);
        root2=sqrt(-discremenant)/(2*a);
        printf("the roots are complax\n");
        printf("the real root is %.1f\n",root1);
        printf("the real root is %.1f",root2);

    }
    return 0;
}