//Name: Leah G. Manalo
//Activity name: OE4
//Description: Postcard from Gizah
//Date: October 15, 2021

#include<iostream>
using namespace std;
int main(){
    int h, i, j, s;

    cout << "Enter pyramid's height: ";
    cin >> h;

    for(i = 1; i <= h; i++) {
        for (s = i; s < h; s++)
            cout << " ";
        for(j = 1; j <= (2 * h - 1); j++) {
            if(i == h || j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    
    for(i = 1; i <= h; i++) {
        for (s = i; s < h; s++)
            cout << " ";
        for(j = 1; j <= (2 * h - 1); j++) {
            if(i == h || j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for(i = 1; i <= h; i++) {
        for (s = i; s < h; s++)
            cout << " ";
        for(j = 1; j <= (2 * h - 1); j++) {
            if(i == h || j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}