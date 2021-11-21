//Name: Leah G. Manalo
//Activity name: PT3
/*Description: File I/O implementation of the POS Computer System
                that computes at least three kinds of product input, plus 12% VAT.*/
//Date: Nov. 22, 2021 (Monday)

#include <fstream>
#include <iostream>
#include <ctime>

const double TAX=0.12;

using namespace std;
int main(){
    ofstream out_stream;
    string p1, p2, p3, cname, p1_id, p2_id, p3_id;
    int qty1, qty2, qty3;
    double p1_price, p2_price, p3_price, t_price, t_tax;
    time_t now = time(0);
    char* dt = ctime(&now);

    out_stream.open("PT3_Manalo_output_file.txt", ios::app);

    //add inputs: product id, customer name, add at least 3 more products
    cout << "Please enter your name : ";
    getline(cin,cname);
    
    cout << "Enter first product    : ";
    getline(cin,p1);
    cout << "Enter product ID#      : ";
    getline(cin,p1_id);
    cout << "Enter quantity         : ";
    cin >> qty1;
    cin.ignore();
    cout << "Enter price            : ";
    cin >> p1_price;
    cin.ignore();
    
    cout << "Enter second product   : ";
    getline(cin,p2);
    cout << "Enter product ID#      : ";
    getline(cin,p2_id);
    cout << "Enter quantity         : ";
    cin >> qty2;
    cin.ignore();
    cout << "Enter price            : ";
    cin >> p2_price;
    cin.ignore();
    
    cout << "Enter third product    : ";
    getline(cin,p3);
    cout << "Enter product ID#      : ";
    getline(cin,p3_id);
    cout << "Enter quantity         : ";
    cin >> qty3;
    cin.ignore();
    cout << "Enter price            : ";
    cin >> p3_price;
    cin.ignore();


    //equation for total tax and total price
    t_tax = (qty1 * p1_price * TAX) + (qty2 * p2_price * TAX) + (qty3 * p3_price * TAX);
    t_price = t_tax + (qty1 * p1_price) + (qty2 * p2_price) + (qty3 * p3_price);

    //format output
    out_stream.setf(ios::fixed);
    out_stream.setf(ios::showpoint);
    out_stream.precision(2);

    out_stream << "-----------------------------------------\n"
               << "----------------RECEIPT------------------\n\n"
               << "Customer Name : " << cname << endl
               << "Date and time : " << dt << endl << endl

               << "1. Product   : " << p1 << endl
               << "ID#          : " << p1_id << endl
               << "Quantity     : " << qty1 << endl
               << "Price        : P" << p1_price << endl << endl

               << "2. Product   : " << p2 << endl
               << "ID#          : " << p2_id << endl
               << "Quantity     : " << qty2 << endl
               << "Price        : P" << p2_price << endl << endl

               << "3. Product   : " << p3 << endl
               << "ID#          : " << p3_id << endl
               << "Quantity     : " << qty3 << endl
               << "Price        : P" << p3_price << endl << endl

               << "12% VAT      : P" << t_tax << endl
               << "TOTAL amount : P" << t_price << endl << endl

               << "--------Thank you for purchasing!--------" << endl
               << "-----------------------------------------\n";


    out_stream.close();

    return 0;
}