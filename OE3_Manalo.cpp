//Name: Leah G. Manalo
//Activity name: OE3
/*Description: Create a salary program in c++ with inputs, employee id, employee name,
hours worked, and rate per hour. Salary is computed based on hours worked and rate per hour
minus tax based on the tax schemes. */
//Date: September 24, 2021 (Friday)

/*Tax schemes:
Salary range      VAT
>40,000           12%
20,000-40,000     10%
<20,000           5%

Output: employee id, name, gross pay, tax rate, net pay.
*/

#include <iostream>

const double TAX1=0.12;
const double TAX2=0.10;
const double TAX3=0.05;

using namespace std;

int main(){
    string ename, id;
    int hrs_work;
    double rph, gpay, npay, tax1, tax2, tax3;

    cout << "Enter employee ID No.        : ";
    getline(cin, id);
    cout << "Enter employee name          : ";
    getline(cin,ename);
    cout << "Enter number of hours worked : ";
    cin >> hrs_work;
    cout << "Enter rate per hour          : ";
    cin >> rph;
    cout << "\n";

    //equations for gross pay and tax range
    gpay = rph * hrs_work;
    tax1 = gpay * TAX1;
    tax2 = gpay * TAX2;
    tax3 = gpay * TAX3;

    //format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "-----------SALARY SYSTEM-----------" << endl;
    cout << "\n";
    cout << "Employee ID No.         : " << id << endl;
    cout << "Employee name           : " << ename << endl;
    cout << "\n";
    cout << "Numbers of hours worked : " << hrs_work << " hours" << endl;
    cout << "Rate per hour           : P" << rph << endl;
    cout << "                         --------" << endl;
    cout << "Your gross pay          : P" << gpay << endl;

    //if else section for the tax rate
    if (hrs_work == 0 || rph == 0) {
        cout << "You did not input anything!" << endl;
        return 0;
    } else if(gpay > 40000){
        npay = gpay - tax1; //with 12% VAT
        cout << "Tax rate                : 12%" << endl;
    } else if (gpay >= 20000 || gpay == 40000){
        npay = gpay - tax2; //with 10% VAT
        cout << "Tax rate                : 10%" << endl;
    } else if (gpay < 20000){
        npay = gpay - tax3; //with 5% VAT
        cout << "Tax rate                : 5%" << endl;
    } else {
        cout << "Tax rate                : Invalid input" << endl;
    }
    cout << "                         --------" << endl;
    cout << "Your net pay            : P" << npay << endl;
    cout << "\n";
    return 0;
}