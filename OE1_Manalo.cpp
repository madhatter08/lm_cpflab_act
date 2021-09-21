//Name: Leah G. Manalo
//Activity: OE1
//Description: Input and output
//Date: Sept. 10, 2021 (Friday)
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name,gndr,addrss,crs,yrsctn,cnmbr;
    int age;

    cout << "Hello CS and IT" << endl;
    cout << "Welcome to Computer Programming Fundamentals! \n\n";
    
    cout << "Enter your Name:         ";
    getline(cin,name);
    cout << "Enter your Age:          ";
    cin >> age;
    cin.ignore();
    cout << "Enter your Gender:       ";
    getline(cin,gndr);
    cout << "Enter your Course:       ";
    getline(cin,crs);
    cout << "Enter your Year&Section: ";
    getline(cin,yrsctn);
    cout << "Enter your Address:      ";
    getline(cin,addrss);
    cout << "Enter your Contact No:   ";
    getline(cin,cnmbr);
    
    //Output display
    cout << "\n-------------------------------" << endl;
    cout << "\nHello!" << endl;
    cout << "\nYour name is: " << name;
    cout << "\nAge:          " << age << " years old";
    cout << "\nGender:       " << gndr;
    cout << "\nCourse:       " << crs;
    cout << "\nYear&Section: " << yrsctn;
    cout << "\nAddress:      " << addrss;
    cout << "\nContact No.:  " << cnmbr << endl;
    cout << "\n------------------------------- \n\n";
    cout << "Kindly double check if all the information are correct. \n\n";
    
    return 0;
}