#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float mark1,mark2,mark3;
};

int main(){
    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for(int i=0;i<n;i++){
        printf("enter the details of the studnet %d\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("roll No: ");
        scanf("%d",&s[i].roll);
        printf("marks in subject 1: ");
        scanf("%f", &s[i].mark1);
        printf("enter the mark of subject 2: ");
        scanf("%f", &s[i].mark2);
        printf("enter the mark in subject 3: ");
        scanf("%f", &s[i].mark3);
    }

    printf("\n-------------Mark Sheet-----------\n");
    printf("Name\troll\tmark1\tmark2\tmark3\ttotal\taverage\n");

    for (int i=0;i<n;i++){
        float total = s[i].mark1 + s[i].mark2 + s[i].mark3;
        float avg = total/3;
        printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",s[i].name,s[i].roll,s[i].mark1,s[i].mark2,s[i].mark3,total,avg);
    }

    
    return 0;
}