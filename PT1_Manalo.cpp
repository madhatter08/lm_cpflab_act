//Name: Leah G. Manalo
//Activity name: OE2
/*Description: Your task it to write a real, interactive, odd/even number scheme.
Logically the program will tell if the number is odd or even number for a series
of int inputs. Moreover, we hope that your odd/even scheme program will be smart
enough not to be fooled by a wrong relational's to avoid infinite loop. Be careful! */
//Date: Oct. 15, 2021

#include <iostream>
using namespace std;
int main (){
    int n, range;
    char ch;

    do{
        cout << "Enter range of numbers: ";
        cin >> range;
        for (int n, count = 1; count <= range; count++){
            cout << "Enter number " << "[" << count << "]: ";
            cin >> n;
            if (n % 2 == 0){
            cout << n << " is an EVEN number." << endl;
            } else {
            cout << n << " is an ODD number." << endl;
            }
        }
            cout << "Try again [y/n]: ";
            cin >> ch;
            cout << endl;
    } while (ch == 'y');

    return 0;
}