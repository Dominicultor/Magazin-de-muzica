//
// Created by Dominic on 12/2/2023.
//

#ifndef UNTITLED_CUSTOMER_H
#define UNTITLED_CUSTOMER_H
#include <iostream>
#include <string>

class Customer {
protected:
    std::string firstname;
    std::string lastname;
    std::string email_address;
    std::string phone_number;
    std::string delivery_address;

public:

    Customer()=default;
    // Initialization constructor
    Customer(std::string  first, std::string  last, std::string  email,
             std::string  phone, std::string  address);

    // Copy constructor
    Customer(const Customer& other);

    // Overloaded << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);

    // Overloaded = operator
    Customer& operator=(const Customer& other);

    // Destructor
    ~Customer();
};


#endif //UNTITLED_CUSTOMER_H
