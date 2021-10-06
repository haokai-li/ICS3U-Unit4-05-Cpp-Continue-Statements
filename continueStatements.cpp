// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about break statements

#include <iostream>
#include <string>

int main() {
    // This Program is about break statements
    int loopNumber = 0;
    int answerNumber = 0;

    std::string userString;
    int userNumberInt;
    float userNumberFloat;

    std::string addString;
    int addNumberInt;
    float addNumberFloat;

    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // process
    try {
        userNumberFloat = std::stof(userString);
        userNumberInt = std::stoi(userString);
        if (userNumberFloat == userNumberInt) {
            while (loopNumber < userNumberInt) {
                // input
                std::cout << "Enter the number to add: ";
                std::cin >> addString;
                // process
                try {
                    addNumberFloat = std::stof(addString);
                    addNumberInt = std::stoi(addString);
                    if (addNumberFloat == addNumberInt) {
                        loopNumber = loopNumber + 1;
                        if (addNumberInt < 0) {
                            continue;
                        }
                        answerNumber = answerNumber + addNumberInt;
                    } else {
                        // output
                        std::cout << "You didn't enter an integer."
                        << std::endl;
                    }
                    // output
                } catch (std::invalid_argument) {
                    // output
                    std::cout << "You didn't enter an integer." << std::endl;
                }
            }
            // output
            std::cout << "Sum of just the positive numbers is = "
            << answerNumber << std::endl;
        } else {
            // output
            std::cout << "You didn't enter an integer." << std::endl;
            std::cout << "" << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
        std::cout << "" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
