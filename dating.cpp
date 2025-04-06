// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-04-03

// This program tells you whether you are worthy of my grandchild or not.

#include <iostream>
#include <string>

int main() {
    // Sets both rich and handsome to false to avoid errors
    std::string user_input;
    bool rich = false;
    bool handsome = false;

    // Ask if the person is rich
    std::cout << "Are you rich (y/n): ";
    std::cin >> user_input;
    // Determines if person is rich or not
    if (user_input == "y" || user_input == "Y") {
        rich = true;
    } else if (user_input == "n" || user_input == "N") {
        rich = false;
    } else {
        std::cout << "Please input y or n" << std::endl;
    }

    // Ask if the person is handsome
    std::cout << "Are you handsome (y/n): ";
    std::cin >> user_input;
    // Determines if person is handsome or not
    if (user_input == "y" || user_input == "Y") {
        handsome = true;
    } else if (user_input == "n" || user_input == "N") {
        handsome = false;
    } else {
        std::cout << "Please input y or n" << std::endl;
    }

    // Check if the person can date the grandchild
    if (rich || handsome) {
        std::cout << "You can date my grandchild" << std::endl;
    } else {
        std::cout << "You cannot date my grandchild" << std::endl;
    }
}
