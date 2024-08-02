#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[20];
    char email[50];
    char regno[30];
    char DOB[20];
    int age;
    int phoneno;
} student;

int main() {
    student stu;
    
    strcpy(stu.name, "Peter Kandie");
    strcpy(stu.regno, "05/0231/2024");
    strcpy(stu.email, "kandiepeter@gmail.com"); 
    strcpy(stu.DOB, "9/03/2004"); //
    stu.age = 19;
    stu.phoneno = 70982273;
    
    printf("name: %s\n", stu.name);
    printf("email: %s\n", stu.email);
    printf("reg.no: %s\n", stu.regno);
    printf("Date of Birth: %s\n", stu.DOB);
    printf("age: %d\n", stu.age);
    printf("Phone number: %d\n", stu.phoneno);

    return 0;
}