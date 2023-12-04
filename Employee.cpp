#include "Employee.h"

#include <utility>

// Initialization constructor
Employee::Employee(int id, std::string  first, std::string  last,
                   std::string  pos, std::string  schedule,
                   double sal, std::string  uname, std::string  pass)
        : employeeID(id), firstName(std::move(first)), lastName(std::move(last)), position(std::move(pos)),
          workSchedule(std::move(schedule)), salary(sal), username(std::move(uname)), password(std::move(pass)) {
    std::cout << "Employee Initialization constructor called." << std::endl;
}

// Copy constructor
Employee::Employee(const Employee& other)
        : employeeID(other.employeeID), firstName(other.firstName),
          lastName(other.lastName), position(other.position),
          workSchedule(other.workSchedule), salary(other.salary),
          username(other.username), password(other.password) {
    std::cout << "Employee Copy constructor called." << std::endl;
}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Employee& employee) {
    os << "Employee ID: " << employee.employeeID << std::endl;
    os << "Name: " << employee.firstName << " " << employee.lastName << std::endl;
    os << "Position: " << employee.position << std::endl;
    os << "Work Schedule: " << employee.workSchedule << std::endl;
    os << "Salary: " << employee.salary << std::endl;
    os << "Username: " << employee.username << std::endl;
    os << "Password: " << employee.password << std::endl;
    return os;
}

// Overloaded = operator
Employee& Employee::operator=(const Employee& other) {
    if (this != &other) {
        employeeID = other.employeeID;
        firstName = other.firstName;
        lastName = other.lastName;
        position = other.position;
        workSchedule = other.workSchedule;
        salary = other.salary;
        username = other.username;
        password = other.password;
    }
    std::cout << "Employee Assignment operator called." << std::endl;
    return *this;
}

// Destructor
Employee::~Employee() {
    std::cout << "Employee Destructor called." << std::endl;
}
