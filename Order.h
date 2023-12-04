#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include <iostream>  // Include necessary headers for std::ostream

class Order {
private:
    static int orderIDCounter;
    static float totalIncome;
    int orderID;
    Customer customer;
    int productID;
    int quantity;
    float price;

public:
    Order(Customer customer, int productID, int quantity, float price);
    ~Order();

    // Overloaded << operator
    friend std::ostream& operator<<(std::ostream& os, const Order& order);

    // Static method to get the total income
    static float getTotalIncome();
};

#endif // ORDER_H
