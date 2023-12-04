#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
protected:


    int productID;
    std::string name;
    float price;
    std::string description;
    std::string brand;
    bool availability;
    std::string category;
    int inventory;

public:
    // Initialization constructor
    Product()=default;

    Product(int id, std::string n, float p, std::string desc,
            std::string b, bool avail, std::string cat, int inv);

    // Copy constructor
    Product(const Product& other);

    // Overloaded << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Product& product);

    // Overloaded = operator
    Product& operator=(const Product& other);

    // Destructor
    ~Product();
};

#endif // PRODUCT_H
