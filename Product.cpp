#include "Product.h"

// Initialization constructor
Product::Product(int id, std::string n, float p, std::string desc,
                 std::string b, bool avail, std::string cat, int inv)
        : productID(id), name(std::move(n)), price(p), description(std::move(desc)),
          brand(std::move(b)), availability(avail), category(std::move(cat)), inventory (inv) {

    try{
        if (id <= 0)
            throw "Invalid id\n";


    }catch(const char* c){std::cout<<"Error:"<<c;}
    std::cout << "Product Initialization constructor called." << std::endl;
}

// Copy constructor
Product::Product(const Product& other)
        : productID(other.productID), name(other.name),
          price(other.price), description(other.description),
          brand(other.brand), availability(other.availability),
          category(other.category),inventory(other.inventory) {
    std::cout << "";
}

// Overloaded << operator for easy printing
std::ostream& operator<<(std::ostream& os, const Product& product) {
    os << "Product ID: " << product.productID << std::endl;
    os << "Name: " << product.name << std::endl;
    os << "Price: " << product.price << std::endl;
    os << "Description: " << product.description << std::endl;
    os << "Brand: " << product.brand << std::endl;
    os << "Availability: " << (product.availability ? "Available" : "Not Available") << std::endl;
    os << "Category: " << product.category << std::endl;
    os << "Inventory: " << product.inventory << std::endl;
    return os;
}

// Overloaded = operator
Product& Product::operator=(const Product& other) {
    if (this != &other) {
        productID = other.productID;
        name = other.name;
        price = other.price;
        description = other.description;
        brand = other.brand;
        availability = other.availability;
        category = other.category;
        inventory = other.inventory;
    }
    std::cout << "";
    return *this;
}

// Destructor
Product::~Product() {
    std::cout << "";


}

 void Product::show_inventory() {
    std:: string s;
    std::ifstream inventory("inventory.txt");
    while(getline(inventory,s)){std::cout<<s<<"\n";};
    inventory.close();


    }


