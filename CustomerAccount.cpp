#include "CustomerAccount.h"

// Initialization constructor for CustomerAccount
CustomerAccount::CustomerAccount(std::string first, std::string last, std::string email,
                                 std::string phone, std::string address,
                                 std::string uname, std::string pass)
        : Customer(std::move(first), std::move(last), std::move(email),
                   std::move(phone), std::move(address)), // Call the base class constructor
          username(std::move(uname)), password(std::move(pass)) {
}
// Overloaded << operator for easy printing
std::ostream& operator<<(std::ostream& os, const CustomerAccount& customerAccount) {
    os << static_cast<const Customer&>(customerAccount); // Call the base class operator<<
    os << "Username: " << customerAccount.username << std::endl;
    os << "Password: " << customerAccount.password << std::endl;
    return os;
}
bool CustomerAccount::login(const std::string& inputUsername, const std::string& inputPassword) const {
    // Common implementation in the base class
    // You can customize this implementation or leave it as is
    return (inputUsername == username && inputPassword == password);
}
void CustomerAccount::interactiveLogin() const {
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
}

// Destructor
CustomerAccount::~CustomerAccount() = default;
