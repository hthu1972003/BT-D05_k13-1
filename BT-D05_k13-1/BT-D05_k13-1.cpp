// BT-D05_k13-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>


using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    //cout << " My name is Hoang Van Thu \n";

    cout << "Hello, BT-D05_k13" << '\n';
    //cout << "I am 18 years old" << std::endl;
    //cout << "I am from Nam Dinh" << '\n';
    
    std::string name;
    int age;
    string address;

    cout << "Enter your name: ";
    //cin >> name;
    std::getline(std::cin, name);
   

    cout << "Enter your age: ";
    cin >> age;

    // ignore newline
    std::cin.ignore(1000, '\n');


    cout << "Enter your address: ";
    //cin >> address;
    std::getline(std::cin, address);

    cout << "Hello, My name is " << name << '\n';
    cout << "I am " << age << " year old" <<  '\n';
    cout << "I am from " << address << '\n';

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
