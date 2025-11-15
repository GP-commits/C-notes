//if you have number like 543 then there sum is 5+4+3=12
/* 
543 / 10 = 54
543 % 10 = 3
*/
#include <stdio.h>
int main(){
    int sum =0,num;
    printf("enter the number to find the sum of\n");
    scanf("%d",&num);
    while(num !=0){
        sum+=num%10;
        num /= 10;
    }
/*
so for example take the number 567 as input to num, now it checks if the
num is not equal to 0 if it becomes true then loop gets in and
sum as 0 initaly gets added to num and gets modulus for example the number
567, 0 = 0 + 567 % 10 that gives the sum the value 7.
on next the  num that is 567 gets divided and gets the number 56.
then the sum that is 7 = 7 + 56 % 10 gives reminder 13 that is 56%10 does first then add 7 to it which is 
7+5 = 13.
on next the num removes 56 and takaes 5 only  then it does
like 13 = 13+5%10 that is 13+5 that is 18 and prints the sum as 18.!
*/
    printf("sum of digit  = %d\n",sum);
    return 0;

}