#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Product{
private:
    int ProductId;
    string name;
    float price;
    string description;
    string brand;
    bool availability;
    string category;
    string imageURL;

public:
    Product()= default;// default constructor
    //assignment constructor
    Product(int pid, string Name, float Price, string Description, string Brand, bool Availability, string Category, string Image){
        ProductId=pid;
        name=std::move(Name);
        price=Price;
        description=std::move(Description);
        brand=std::move(Brand);
        availability=Availability;
        category=std::move(Category);
        imageURL=std::move(Image);





    }
    //copy constructor
    Product(const Product &other) = default;

    // Overloading the assignment operator
    Product & operator=(const Product &other) = default;

    // Overloading the << operator
    friend ostream &operator<<(ostream &output, const Product &p) {
        output << "Product ID: " << p.ProductId << endl;
        output << "Name: " << p.name << endl;
        output << "Price: " << p.price <<" EUR"<< endl;
        output << "Description: " << p.description << endl;
        output << "Brand: " << p.brand << endl;

        if(p.availability)output<<"Availability: Yes"<<endl;
        else output<<"Availability: No"<<endl;

        output << "Category: " << p.category << endl;
        output << "Image URL: " << p.imageURL << endl;
        return output;
    }
    //destructor
    ~Product() {

        cout << "Product " << ProductId << " has been destroyed." << endl;
    }

};
class customer {
private:
    string firstName;
    string lastName;
    string phoneNumber;
    string deliveryAddress;

public:
    //default constructor
    customer()=default;
    //assignment constructor
    customer(string first, string last, string phone, string address)
            : firstName(std::move(first)), lastName(std::move(last)), phoneNumber(std::move(phone)), deliveryAddress(std::move(address)) {}


    friend ostream &operator<<(ostream &output, const customer &c) {
        output << "First Name: " << c.firstName << endl;
        output << "Last Name: " << c.lastName << endl;
        output << "Phone Number: " << c.phoneNumber << endl;
        output << "Delivery Address: " << c.deliveryAddress << endl;
        return output;
    }

    // Overloaded assignment operator =
    customer & operator=(const customer &other) = default;
    //destructor
    ~customer() {cout<<"Testing"<<endl;}
};

class __attribute__((unused)) Administrator {
private:
    const string username;
    const string password;
    string permissions;
    string accessLevel;

public:
    // Constructor with default values
    Administrator()
            : username("admin_username"), password("admin_password"), permissions("all_permissions"), accessLevel("full_access") {}



    // Destructor
    ~Administrator() = default;
};

class Employee {
private:
    int employeeID;
    string firstName;
    string lastName;
    string position;
    string workSchedule;
    double salary;

public:
    // Constructor
    Employee()= default;
    //Assignment constructor
    Employee(int id, string first, string last, string pos, string schedule, double sal);

    //Copy constructor
    Employee(const Employee &other)= default;

    //overloading = operator
    Employee& operator=(const Employee &other) = default;

    // Overloading the << operator
    friend ostream &operator<<(ostream &output, const Employee &employee) {
        output << "Employee ID: " << employee.employeeID << "\n"
               << "Name: " << employee.firstName << " " << employee.lastName << "\n"
               << "Position: " << employee.position << "\n"
               << "Work Schedule: " << employee.workSchedule << "\n"
               << "Salary: " << employee.salary << endl;
        return output;
    }
    //Destructor
    ~Employee(){cout<<"Test Employee";};
};

Employee::Employee(int id, string first, string last, string pos, string schedule, double sal)
        : employeeID(id), firstName(std::move(first)), lastName(std::move(last)), position(std::move(pos)), workSchedule(std::move(schedule)), salary(sal) {}


int main(){
Product p1(12,"Guitar", 100.50,"Electric guitar","Gibson",true,"Instruments","bugdfjvbdcujhm");
cout<<p1;
//product p2=p1;
//cout<<p2;
customer c1("Alex", "Negru", "0765736524", "Strada 123");
//customer c2=c1;
//cout<<c2;
cout<<c1;
    Employee employee1(1001, "John", "Doe", "Sales Associate", "Monday-Friday, 9 AM - 5 PM", 45000.0);
    cout<<employee1;


    return 0;
}


//  order, inventory, user interface, customeraccount
//roles : customer, employee, administrator
//all products will be read from files,
//La inceput poti sa te loghezi, ori client ori administrator, sau sa continui "as guest"
