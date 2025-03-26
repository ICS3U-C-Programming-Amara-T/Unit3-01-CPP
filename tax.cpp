// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Created on: March 26, 2025
// This program calculates the total using subtotals and HST

#include <iostream>

int main() {
    // Declare variables
    int tax = 5;
    float subtotal, total;

    // Get subtotal from the user
    std::cout << "Enter the subtotal ($): ";
    std::cin >> subtotal;

    // Calculate tax and total  with the tax
    tax = subtotal * tax / 100;
    total = subtotal + tax;

    // Display the tax and total with the tax
    std::cout << "You entered the subtotal of $" << subtotal << std::endl;
    std::cout << "The HST is $" << tax << std::endl;
    std::cout << "The total is $" << total << std::endl;
}
