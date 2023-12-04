#include "RegularCustomer.h"
#include <iostream>

// Initialization constructor for RegularCustomer
RegularCustomer::RegularCustomer(std::string first, std::string last, std::string email,
                                 std::string phone, std::string address,
                                 std::string uname, std::string pass)
        : CustomerAccount(std::move(first), std::move(last), std::move(email),
                          std::move(phone), std::move(address), std::move(uname), std::move(pass)) {
    // Additional initialization for RegularCustomer...
}

// Implementation of login function for RegularCustomer
bool RegularCustomer::login(const std::string& inputUsername, const std::string& inputPassword) const {
    // Call the common login function from the base class
    // and possibly add additional checks or behaviors specific to RegularCustomer
    return CustomerAccount::login(inputUsername, inputPassword);
}

// Implementation of interactiveLogin function for RegularCustomer
void RegularCustomer::interactiveLogin() const {
    // Prompt user for username and password
    std::string inputUsername, inputPassword;
    std::cout << "Enter username: ";
    std::cin >> inputUsername;
    std::cout << "Enter password: ";
    std::cin >> inputPassword;

    // Call the login function
    if (login(inputUsername, inputPassword)) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Login unsuccessful." << std::endl;
    }
    // Additional logic specific to RegularCustomer if needed...
}

// Other member functions specific to RegularCustomer...
