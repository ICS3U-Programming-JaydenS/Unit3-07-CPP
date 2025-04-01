// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 19, 2025
// This is a number guessing game.

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // this function uses a try statement
    std::string userAgeAsString;
    int userAgeAsInt;

    // Ask the user for their number
    std::cout << "How old are you? ";
    std::cin >> userAgeAsString;

    // Checks if user number is a number and if it's right
    try {
        userAgeAsInt = std::stoi(userAgeAsString);
        // If it works
        if ((userAgeAsInt > 25) && (userAgeAsInt < 40)) {
            std::cout << "You may date my granddaughter.\n";
        // If they are too young
        } else if (userAgeAsInt <= 25) {
            std::cout << "You're too young.\n";
        // If they are too old
        } else {
            std::cout << "You're too old.\n";
        }
    // If it doesn't work
    } catch (std::invalid_argument) {
        std::cout << userAgeAsString << " is not a valid number.\n";
    }
    // Thank you message
    std::cout << "Thank you for playing.\n";
}
