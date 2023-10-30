#include <iostream>
#include <string>
#include <vector>
using namespace std;

class product{
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
    product(){};
    product(int pid, string Name, float Price, string Description, string Brand, bool Availability, string Category, string Image){
        ProductId=pid;
        name=Name;
        price=Price;
        description=Description;
        brand=Brand;
        availability=Availability;
        category=Category;
        imageURL=Image;





    }
    //copy constructor
    product(const product &other)
            : ProductId(other.ProductId), name(other.name), price(other.price), description(other.description), brand(other.brand), availability(other.availability), category(other.category), imageURL(other.imageURL) {
    }

    // Overloading the assignment operator
    void operator=(const product &other) {
        ProductId = other.ProductId;
        name = other.name;
        price = other.price;
        description = other.description;
        brand = other.brand;
        availability = other.availability;
        category = other.category;
        imageURL = other.imageURL;
    }


    friend ostream &operator<<(ostream &output, const product &p) {
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
    ~product() {
        // Perform any necessary cleanup operations here
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
    customer() : firstName(""), lastName(""), phoneNumber(""), deliveryAddress("") {}
    //assignment constructor
    customer(string first, string last, string phone, string address)
            : firstName(first), lastName(last), phoneNumber(phone), deliveryAddress(address) {}

    //destructor
    friend ostream &operator<<(ostream &output, const customer &c) {
        output << "First Name: " << c.firstName << endl;
        output << "Last Name: " << c.lastName << endl;
        output << "Phone Number: " << c.phoneNumber << endl;
        output << "Delivery Address: " << c.deliveryAddress << endl;
        return output;
    }

    // Overloaded assignment operator (=)
    void operator=(const customer &other) {
        firstName = other.firstName;
        lastName = other.lastName;
        phoneNumber = other.phoneNumber;
        deliveryAddress = other.deliveryAddress;
    }
    ~customer() {cout<<"Testing"<<endl;}
};

class Administrator {
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
    ~Administrator() {}
    bool Authen
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
    Employee(){};
    // Constructor
    Employee(int id, const string &first, const string &last, const string &pos, const string &schedule, double sal)
            : employeeID(id), firstName(first), lastName(last), position(pos), workSchedule(schedule), salary(sal) {}

    // Copy constructor
    Employee(const Employee &other)
            : employeeID(other.employeeID), firstName(other.firstName), lastName(other.lastName),
              position(other.position), workSchedule(other.workSchedule), salary(other.salary) {}


    void operator=(const Employee &other) {
        employeeID = other.employeeID;
        firstName = other.firstName;
        lastName = other.lastName;
        position = other.position;
        workSchedule = other.workSchedule;
        salary = other.salary;
    }

    // Overloading the << operator
    friend ostream &operator<<(ostream &output, const Employee &employee) {
        output << "Employee ID: " << employee.employeeID << "\n"
               << "Name: " << employee.firstName << " " << employee.lastName << "\n"
               << "Position: " << employee.position << "\n"
               << "Work Schedule: " << employee.workSchedule << "\n"
               << "Salary: " << employee.salary << endl;
        return output;
    }
    ~Employee(){cout<<"Test Employee";};
};


int main(){
/*product p1(12,"Guitar", 100.50,"Electric guitar","Gibson",true,"Instruments","bugdfjvbdcujhm");
cout<<p1;
product p2=p1;
cout<<p2;
customer c1("Alex", "Negru", "0765736524", "Strada 123");
customer c2=c1;
cout<<c2;
cout<<c1;*/
    Employee employee1(1001, "John", "Doe", "Sales Associate", "Monday-Friday, 9 AM - 5 PM", 45000.0);
    cout<<employee1;
    Employee employee2=employee1;
    cout<<employee2;

    return 0;
}


//  order, inventory, user interface, customeraccount
//roles : customer, employee, administrator
//all products will be read from files,
//La inceput poti sa te loghezi, ori client ori administrator, sau sa continui "as guest"
