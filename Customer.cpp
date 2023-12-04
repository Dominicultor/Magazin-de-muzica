#include "Customer.h"

#include <utility>

// Initialization constructor
Customer::Customer(std::string  first, std::string  last, std::string  email,
                   std::string  phone, std::string  address)
        : firstname(std::move(first)), lastname(std::move(last)), email_address(std::move(email)), phone_number(std::move(phone)), delivery_address(std::move(address)) {
}

// Copy constructor
Customer::Customer(const Customer& other)
        : firstname(other.firstname), lastname(other.lastname),
          email_address(other.email_address), phone_number(other.phone_number),
          delivery_address(other.delivery_address) {
    std::cout<<"";
}

// Overloaded << operator for easy printing
std::ostream& operator<<(std::ostream& os, const Customer& customer) {
    os << "Name: " << customer.firstname << " " << customer.lastname << std::endl;
    os << "Email: " << customer.email_address << std::endl;
    os << "Phone: " << customer.phone_number << std::endl;
    os << "Address: " << customer.delivery_address << std::endl;
    return os;
}

// Overloaded = operator
Customer& Customer::operator=(const Customer& other) {
    if (this != &other) {
        firstname = other.firstname;
        lastname = other.lastname;
        email_address = other.email_address;
        phone_number = other.phone_number;
        delivery_address = other.delivery_address;
    }
    std::cout << "";
    return *this;
}

// Destructor
Customer::~Customer() {
    std::cout << "";
}
