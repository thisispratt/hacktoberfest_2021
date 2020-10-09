// Program to Store Information of Students Using Structure

#include<stdio.h>
struct student
{
    char firstname[50];
    int roll;
    float marks;
}s[10];

int main() {
    int i;
    printf("Enter the information of students:\n");

    for(i=0;i<5;i++){
        s[i].roll = i+1;
        printf("\n For roll number%d, \n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstname);
        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("Displaying Information:\n\n");

    for(i=0;i<5;i++){
        printf("\n Roll number: %d\n", i+1);
        printf("First name: ");
        puts(s[i].firstname);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");

    }
    return 0;
}

