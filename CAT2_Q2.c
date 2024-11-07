//C structures
#include <stdio.h>
#include <string.h>

//Define the employee structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize the employee structure
    struct employee John ={
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the values of the employee structure
    printf("Name: %s\n", John.name);
    printf("ID: %d\n", John.id);
    printf("Department: %s\n", John.department);
    printf("Salary: %.2f\n", John.salary);
    printf("Email: %s\n", John.email);

    return 0;
}
