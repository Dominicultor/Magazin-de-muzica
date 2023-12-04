#ifndef CUSTOMER_ACCOUNT_H
#define CUSTOMER_ACCOUNT_H

#include "Customer.h"

class CustomerAccount : public Customer {
protected:
    std::string username;
    std::string password;

public:
    CustomerAccount()= default;
    // Initialization constructor for CustomerAccount
    CustomerAccount(std::string first, std::string last, std::string email,
                    std::string phone, std::string address,
                    std::string uname, std::string pass);


// Overloaded << operator
friend std::ostream& operator<<(std::ostream& os, const CustomerAccount& customerAccount);

    virtual bool login(const std::string& inputUsername, const std::string& inputPassword) const = 0;
     virtual void interactiveLogin() const;
// Destructor
virtual ~CustomerAccount();
};

#endif // CUSTOMER_ACCOUNT_H

