#ifndef REGULAR_CUSTOMER_H
#define REGULAR_CUSTOMER_H

#include "CustomerAccount.h"

class RegularCustomer : public CustomerAccount {
protected:
    double amountSpent;
    int points;

public:
    RegularCustomer()=default;
    // Initialization constructor for RegularCustomer
    RegularCustomer(std::string first, std::string last, std::string email,
                    std::string phone, std::string address,
                    std::string uname, std::string pass);

    // Implementation of login function for RegularCustomer
    bool login(const std::string& inputUsername, const std::string& inputPassword) const override;

    // Implementation of interactiveLogin function for RegularCustomer
    void interactiveLogin() const override;


    RegularCustomer clone() const;
};




#endif // REGULAR_CUSTOMER_H

