// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 27, 2021
// Converts level marks into percentage

#include <iostream>
#include <string>
#include <cmath>

float volume_cylinder(int radius, int height) {
    return (radius * radius) * height * M_PI;
}

main() {
    int user_height, user_radius;
    double final_volume;
    std::string user_input1, user_input2;
    std::cout << "Enter the radius of your cylinder (mm): ";
    std::cin >> user_input1;
    std::cout << "Enter the height of your cylinder (mm): ";
    std::cin >> user_input2;
    try {
        user_radius = std::stoi(user_input1);
        try {
            user_height  = std::stoi(user_input2);
            volume_cylinder(user_radius, user_height);
            final_volume = volume_cylinder(user_radius, user_height);
            std::cout << final_volume;
            std::cout << " mm³ is the volume of your cylinder";
        } catch (std::invalid_argument) {
            std::cout << user_input2 << " is not a dimension";
        }
    } catch (std::invalid_argument) {
        std::cout << user_input1 << " is not a dimension";
}
std::cout << "\nDone.";
}
