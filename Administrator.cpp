

//
// Created by Dominic on 1/7/2024.
//

// Administrator.cpp
#include "Administrator.h"

// Static initialization
Administrator& Administrator::getInstance() {
    static Administrator instance;
    return instance;
}

// Private constructor
Administrator::Administrator() : username("Admin01"), password("Admin13243601") {}

// Setters
void Administrator::setUsername(const std::string& newUsername) {
    username = newUsername;
}

void Administrator::setPassword(const std::string& newPassword) {
    password = newPassword;
}

// Authentication method
bool Administrator::authenticate(const std::string& enteredUsername, const std::string& enteredPassword) {
    return (enteredUsername == username) && (enteredPassword == password);
}

