#ifndef VIP_CUSTOMER_H
#define VIP_CUSTOMER_H

#include "CustomerAccount.h"

class VIPCustomer : public CustomerAccount {
protected:
    double amountSpent;
    int points;

public:
    VIPCustomer()=default;
    // Initialization constructor for VIPCustomer
    VIPCustomer(std::string first, std::string last, std::string email,
                std::string phone, std::string address,
                std::string uname, std::string pass);

    // Implementation of login function for VIPCustomer
    bool login(const std::string& inputUsername, const std::string& inputPassword) const override;

    // Implementation of interactiveLogin function for VIPCustomer
    void interactiveLogin() const override;

    // Other member functions specific to VIPCustomer...
};

#endif // VIP_CUSTOMER_H

