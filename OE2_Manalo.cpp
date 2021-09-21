//Name: Leah G. Manalo
//Activity name: OE2
//Description: POS Computer System that computes at least three kinds of product input, plus 12% VAT.
//Date: Sept. 17, 2021 (Friday)

#include <iostream>
#include <ctime>

const double TAX=0.12;

using namespace std;
int main(){
    string p1, p2, p3, cname, p1_id, p2_id, p3_id;
    int qty1, qty2, qty3;
    double p1_price, p2_price, p3_price, t_price, t_tax;
    time_t now = time(0);
    char* dt = ctime(&now);

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
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "-----------------------------------------\n";
    cout << "----------------RECEIPT------------------" << "\n\n";
    cout << "Customer Name : " << cname << endl;
    cout << "Date and time : " << dt << endl;
    cout << "\n";
    cout << "1. Product   : " << p1 << endl;
    cout << "ID#          : " << p1_id << endl;
    cout << "Quantity     : " << qty1 << endl;
    cout << "Price        : P" << p1_price << endl;
    cout << "\n";
    cout << "2. Product   : " << p2 << endl;
    cout << "ID#          : " << p2_id << endl;
    cout << "Quantity     : " << qty2 << endl;
    cout << "Price        : P" << p2_price << endl;
    cout << "\n";
    cout << "3. Product   : " << p3 << endl;
    cout << "ID#          : " << p3_id << endl;
    cout << "Quantity     : " << qty3 << endl;
    cout << "Price        : P" << p3_price << endl;
    cout << "\n";
    cout << "12% VAT      : P" << t_tax << endl;
    cout << "TOTAL amount : P" << t_price << endl;
    cout << "\n";
    cout << "thank you for purchasing!" << endl;
    cout << "\n";
    return 0;
}