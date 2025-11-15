#include <stdio.h>
int main(){
    int arr[100], n, i, num, count =0;
    int *ptr;
    
    printf("enter the number of elemtns: ");
    scanf("%d", &n);

    printf("enter %d elemts: \n",n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the number to count");
    scanf("%d",&num);

    ptr = arr;
    
    for(i=0;i<n;i++){
        if(*(ptr+i)==num){
            count++;
        }
    }
    
    printf("Number %d repeats %d times in array",num,count);
    return 0;
}