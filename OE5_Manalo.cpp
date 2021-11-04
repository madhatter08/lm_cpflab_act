//Name: Leah G. Manalo
//Activity name: OE5
//Description: void functions and functions with parameters implementations
//Date: November 5, 2021

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//function ptototype/declaration
void rvrsd_str();
int rvrsd_int(int n);

int main(){
    int function;
    cout << endl;
    cout << "<< Cryptographic System >>" << endl;
    cout << "[1] Reverse a String" << endl;
    cout << "[2] Reverse Unsigned Integer" << endl;
    cout << "[3] Exit" << endl;
    cout << "Select a function: ";
    cin >> function;
    cout << endl;

    switch(function){
        case 1:{
            string word;
            cout << "<< Reverse a String >>" << endl;
            getline(cin, word);
            rvrsd_str();
            cout << endl;
            break;
        }
        case 2:{
            int num, reverse;
            cout << "<< Reverse Unsigned Integer >>" << endl; 
            cout << "Enter a set of numbers [0-9] : ";
            cin >> num;

            //function call for unsigned integer
            reverse = rvrsd_int(num);
            cout << "Reversed set of numbers      : " << reverse << endl;
            cout << endl;
            break;
        }
        case 3:{
            cout << "Exit system..." << endl;
            break;
        }
        default:{
            cout << "Invalid function..." << endl;
            break;
        }
    }

    return 0;
}

//function definition for string
void rvrsd_str(){
    //function body
    string word;
    cout << "Enter a word  : ";
    getline(cin, word);
    reverse(word.begin(), word.end());
    cout << "Reversed word : " << word << endl;
    return;
}

//function definition for unsigned integer
int rvrsd_int(int n){
    //function body
    int digits = (int)log10(n);

    if(n == 0)
        return 0;
    return ((n%10 * pow(10, digits)) + rvrsd_int(n/10));
}