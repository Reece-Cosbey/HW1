/*
 * @file main.cpp
 * @author Reece Cosbey
 * @date 2024-09-27
 * @brief this file holds the call functions for the class Vector
 * This file is used to call the class and run all the tests
 */
#include <iostream>
#include "Vector.h"
using namespace std;
int main() {
    // Create a Vector object and add 1000+ integers using push_back
    Vector vector1;
    for (int i = 0; i < 1000; i++) {
        vector1.push_back(i);
    }

    // Test the operator[] in action
    for (int i = 0; i < vector1.size(); i++) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    // Test the size() function with a for loop
    for (int i = 0; i < vector1.size(); i++) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    // Test the copy constructor
    Vector vector2 = vector1;
    for (int i = 0; i < vector2.size(); i++) {
        cout << vector2[i] << " ";
    }
    cout << endl;

    // Test assignment (showing deep!)
    Vector vector3;
    vector3 = vector1;
    for (int i = 0; i < vector3.size(); i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}
