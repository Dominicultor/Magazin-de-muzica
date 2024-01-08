#include <iostream>
#include "Product.h"
#include "Employee.h"
#include "Customer.h"
#include "CustomerAccount.h"
#include "RegularCustomer.h"
#include "VIPCustomer.h"
#include "Order.h"
#include "fstream"
#include "Administrator.h"
using namespace std;


class pointers{


public:
    CustomerAccount* p;


};





int main(){
   // RegularCustomer regularCustomers[7] = {
         //   RegularCustomer("John", "Doe", "john@example.com", "123456789", "Home", "john123", "pass123", 100),
         //   RegularCustomer("Alice", "Smith", "alice@example.com", "987654321", "Work", "alice456", "pass456", 50),
          //  Regularcustomer("Mark", "Johnson", "mark@example.com", "555666777", "Home", "mark789", "pass789", 80),
          //  Regularcustomer("Sara", "Williams", "sara@example.com", "888999000", "Work", "sara101", "pass101", 120),
           // Regularcustomer("Daniel", "Brown", "daniel@example.com", "111222333", "Home", "daniel111", "pass111", 70),
          //  Regularcustomer("Sophie", "Miller", "sophie@example.com", "444555666", "Work", "sophie222", "pass222", 90),
          //  Regularcustomer("Michael", "Clark", "michael@example.com", "333444555", "Home", "michael333", "pass333", 110)
   // };

    RegularCustomer originalCustomer("John", "Doe", "john@example.com", "123456789", "123 Main St", "johndoe", "password");
    RegularCustomer clonedCustomer = originalCustomer.clone();
    cout<<clonedCustomer;
    Administrator& admin= Administrator::getInstance();

    cout<<"Welcome!Please select mode :"<<endl;


        int mode;
        cout<<"Login account: 1\n";
        cout<<"Employee: 2\n";
        cout<<"Administrator: 3\n";
        cin>>mode;
        switch (mode) {
            case 1:
                cout<<"You chose to login!\n";

                break;

            case 2:

                break;

            case 3:

                break;



        }








    VIPCustomer aa;
    aa={"John", "Doe", "john.doe@example.com", "123456789", "123 Main St","user","pass"};

    // pointers a={a.p=&aa};

    //a.p->interactiveLogin();


    //Customer customer("John", "Doe", "john.doe@example.com", "123456789", "123 Main St");

    //Order order(customer, 1, 2, 19.99);
  //  Order OOOrder(customer, 1, 2, 19.99);
   // Order oorder(customer, 2, 2, 19.99);

   // cout<<Order::getTotalIncome()<<"\n";

   // Product p(-543,"",543,"","",true,"", 4);


    return 0;
}







//  order, , user interface, customeraccount
//roles : customer, employee, administrator
//all products will be read from files,
//La inceput poti sa te loghezi, ori client ori administrator, sau sa continui "as guest"