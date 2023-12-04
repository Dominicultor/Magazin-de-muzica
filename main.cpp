#include <iostream>
#include "Product.h"
#include "Employee.h"
#include "Customer.h"
#include "CustomerAccount.h"
#include "RegularCustomer.h"
#include "VIPCustomer.h"
#include "Order.h"
using namespace std;


class pointers{


public:
    CustomerAccount* p;


};





int main(){
Employee e;
RegularCustomer r;




    VIPCustomer aa;
    aa={"John", "Doe", "john.doe@example.com", "123456789", "123 Main St","user","pass"};
    pointers a={a.p=&aa};
    a.p->interactiveLogin();


    Customer customer("John", "Doe", "john.doe@example.com", "123456789", "123 Main St");

    Order order(customer, 1, 2, 19.99);
    Order OOOrder(customer, 1, 2, 19.99);
    Order oorder(customer, 1, 2, 19.99);

    cout<<Order::getTotalIncome()<<"\n";

    Product p(-543,"",543,"","",true,"", 4);


    return 0;
}







//  order, , user interface, customeraccount
//roles : customer, employee, administrator
//all products will be read from files,
//La inceput poti sa te loghezi, ori client ori administrator, sau sa continui "as guest"