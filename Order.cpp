#include "Order.h"

int Order::orderIDCounter = 0;
float Order::totalIncome = 0.0;

Order::Order(Customer customer, int productID, int quantity, float price)
        : orderID(orderIDCounter++), customer(customer), productID(productID), quantity(quantity), price(price) {
    totalIncome += quantity * price;
}

Order::~Order() {
    // Destructor logic if needed...
}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Order& order) {
    os << "Order ID: " << order.orderID << "\n";
    os << "Customer: " << order.customer << "\n";
    os << "Product ID: " << order.productID << "\n";
    os << "Quantity: " << order.quantity << "\n";
    os << "Price: " << order.price << "\n";
    // Add more information as needed
    return os;
}

// Static method to get the total income
float Order::getTotalIncome() {
    return totalIncome;
}
