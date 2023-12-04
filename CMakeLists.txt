cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp
        Product.cpp
        Product.h
        Employee.cpp
        Employee.h
        Customer.cpp
        Customer.h
        Customer.cpp
        CustomerAccount.cpp
        CustomerAccount.h
        RegularCustomer.cpp
        RegularCustomer.h
        VIPCustomer.cpp
        VIPCustomer.h
        Administrator.cpp
        Administrator.h
        Order.cpp
        Order.h

)
