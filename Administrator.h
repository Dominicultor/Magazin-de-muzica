

#ifndef UNTITLED_ADMINISTRATOR_H
#define UNTITLED_ADMINISTRATOR_H
//
// Created by Dominic on 1/7/2024.
//





#include <iostream>

class Administrator {
private:
    // Private constructor to prevent instantiation
    Administrator();

    // Attributes
    std::string username;
    std::string password;

public:
    // Static method to get the instance
    static Administrator& getInstance();

    // Setters for username and password (if needed)
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);

    // Authentication method
    bool authenticate(const std::string& enteredUsername, const std::string& enteredPassword);

    // Non-copyable and non-assignable to enforce singleton
    Administrator(const Administrator&) = delete;
    Administrator& operator=(const Administrator&) = delete;
};








#endif //UNTITLED_ADMINISTRATOR_H
