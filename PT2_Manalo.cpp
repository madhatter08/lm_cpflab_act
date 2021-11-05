//Performance Task 2:
/*Description: Conversion Console App using Functions (Dollar to Peso & Peso to Dollar)
                This is also a debugging activity. */
//Name: Leah G. Manalo

#include<iostream>
using namespace std;

//First function prototypes
void promptAndWait();
void dollartophp(){
    cout << "$1 US = 50.73 Pesos" << endl;
}
void phptodollar(){
    cout << "1 Peso = $0.020 US" << endl;
}

/*Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
float dollarToPeso(float rate, unsigned dollarsIn);
float pesoToDollar(float rate, unsigned pesoIn);

int main(){
    //declare the variables for the user input.
    float conversionRate1 = 50.73; // $1 = 50.73 Pesos
    float conversionRate2 = 0.020; // PHP1 = $0.020 US
    unsigned dollarsIn, pesoIn;
    int ch, ans=0;

    //function for monetary formatting
    struct group_facet: public std::numpunct<char>{
    protected:
        string do_grouping() const {return "\003";}
    };
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout.setf(ios::fixed);
    cout.precision(2);

    do{
        system("cls"); 
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl; 
        cout << "[0] Exit to Conversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                dollartophp(); //Show the exchange rate by calling the function.
                //Prompt the user and take US dollar input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal): ";
                cin >> dollarsIn;
                dollarToPeso(conversionRate1, dollarsIn); //Show the conversion by calling the function.
                promptAndWait(); //Call the promptAndWait() function.
                break;
            }
            case 2:{
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                phptodollar(); //Show the exchange rate by calling the function.
                //Promt the user and take PHP peso input.
                cout << "Enter a PHP peso amount (without the peso sign, commas or a decimal): ";
                cin >> pesoIn;
                pesoToDollar(conversionRate2, pesoIn); //Show the conversion by calling the function.
                promptAndWait();
                break;
            }
            case 0:{
                promptAndWait();
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:{
                cout << "Invalid Input!";
                promptAndWait();
            }
        }       
    }while(ans == 0);

return 0;
} //End of main function

//Define the promptAndWait() function.
void promptAndWait() { 
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
    return;
}
//Define the dollarToPeso function.
float dollarToPeso(float conversionRate1, unsigned dollarsIn) {
    //Print the results.
    cout << "\n$" << dollarsIn << " US = " << (conversionRate1 * dollarsIn) << " PH Pesos.\n";
    return (conversionRate1 * dollarsIn);
}
//Define the pesoToDollar function.
float pesoToDollar(float conversionRate2, unsigned pesoIn) {
    //Print the results.
    cout << "\nPHP" << pesoIn << " = " << (conversionRate2 * pesoIn) << " US Dollars.\n";
    return (conversionRate2 * pesoIn);
}
