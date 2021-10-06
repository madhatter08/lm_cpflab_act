//Name: Leah G. Manalo
//Activity: Prelim Exam
//Description: See problem set in Page 1.
//Date: October 6, 2021 (Wednesday)

#include <iostream>

const double TAX=0.12;

using namespace std;
int main(){
    string ename, id, p_date;
    double tax, npay, gpay, rph, hrs_worked, phealth=150, sss=250, pagibig=200;

    //Input section
    cout << "Enter your name : ";
    getline(cin,ename);
    cout << "Employee number : ";
    getline(cin,id);
    cout << "Date of payday  : ";
    getline(cin,p_date);
    cout << endl;
    cout << "Hourly pay rate : ";
    cin >> rph;
    cout << "Hours worked    : ";
    cin >> hrs_worked;
    cout << endl;

    //equations for gross pay, withholding tax, and net pay
    gpay =  hrs_worked * rph;
    tax = gpay * TAX;
    npay = gpay - tax - phealth - sss - pagibig;

    //format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Output section
    cout << "--------------Payroll System--------------" << endl;
    cout << endl;
    cout << "Payroll summary for : " << ename << endl;
    cout << "Employee No.        : " << id << endl;
    cout << "Payroll date        : " << p_date << endl;
    cout << endl;
    cout << "You worked " << hrs_worked << " hours at " << rph << " per hour." << endl;
    cout << "Gross pay        :          Php  " << gpay << endl;
    cout << "Withholding tax  :               " << tax << endl;
    cout << "Philhealth       :                " << phealth << endl;
    cout << "SSS              :                " << sss << endl;
    cout << "Pagibig          :                " << pagibig << endl;
    cout << "------------------------------------------" << endl;
    cout << "Net pay          :          Php  " << npay << endl;
    cout << endl;

    //if-else section for employee status
    if (npay <= 5000) {
        cout << "Employee status  : Contractual" << endl;
    } else if (npay >= 5001 && npay <= 10000) {
        cout << "Employee status  : Probationary" << endl;
    } else {
        cout << "Employee status  : Regular" << endl;
    }
    cout << endl;
    cout << "-------------------End--------------------" << endl;
    cout << endl;
    return 0;
}