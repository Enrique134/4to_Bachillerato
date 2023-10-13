#include <iostream>
#include <string>
#include <vector>

#include <conio.h>
#include <stdio.h>

using namespace std;

class Employee {
    public:
        string name;
        int identifier;
        double salary;

        void print() {
            printf("\n%s\nidentifier %i\nsalary %lf\n\n", name, identifier, salary);
        }
};

int main(void) {
    int count;

    printf("write employees count: ");
    cin>> count;

    vector<Employee> employees(count);

    printf("\nEmployees Data");
    for(int i = 0; i < count; ++i) {
        printf("\n\nEmployee %i\nname: ", i);
        cin>> employees[i].name;
        printf("identifier: ");
        cin>> employees[i].identifier;
        printf("salary: ");
        cin>> employees[i].salary;
    }

    int search;
    Employee searchedEmployee;

    printf("write employee identifier for search: ");
    cin>> search;

    Employee highestSalary = employees[0], lowestSalary = employees[0];

    for(int i = 0; i < count; ++i) {
        if(employees[i].salary >= highestSalary.salary) {
            highestSalary = employees[i];
        } else if(employes[i].salary <= lowestSalary.salary) {
            lowestSalary = employees[i];
        }

        if(employees[i].identifier == search) {
            searchedEmployee = employees[i];
        }
    }

    printf("\nhighest salary:");
    highestSalary.print();
    printf("lowest salary:");
    lowestSalary.print();
    
    if(searchedEmployee) {
        printf("searched employee \"%i\":", search);
        searchedEmployee.print();
    } else {
        printf("the searched employee \"%i\" could not be founded :(", search);
    }
    

    getch();
    return 0;
}