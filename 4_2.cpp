// 4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14159; 
    int radius; 

    cout << "Enter Radius: " << endl; 

    cin >> radius;

    float volume = radius * radius * radius * pi;

    cout << "The volume is: " << volume << endl; return 0;  
}
