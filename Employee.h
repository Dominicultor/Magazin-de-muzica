#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string firstName;
    std::string lastName;
    std::string position;
    std::string workSchedule;
    double salary;
    std::string username;
    std::string password;

public:
    // Initialization constructor
    Employee()=default;
    Employee(int id, std::string  first, std::string  last,
             std::string  pos, std::string  schedule,
             double sal, std::string  uname, std::string  pass);

    // Copy constructor
    Employee(const Employee& other);

    // Overloaded << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Employee& employee);

    // Overloaded = operator
    Employee& operator=(const Employee& other);

    // Destructor
    ~Employee();
};

#endif // EMPLOYEE_H
