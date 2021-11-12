//Name: Leah G. Manalo
//Activity: Midterm Exam
//Description: Create a C++ program console conversion app.
//Date: November 12, 2021

#include<iostream>
using namespace std;

//Function declarations (w/ definitions) for void functions.
void promptAndWait();
void kg_lb(){
    cout << "1 Kilogram (kg) = 2.21 Pounds (lb)\n\n";}
void lb_kg(){
    cout << "1 Pound (lb) = 0.45 Kilogram (kg)\n\n";}
void g_oz(){
    cout << "1 Gram (g) = 0.04 Ounce (oz)\n\n";}
void oz_g(){
    cout << "1 Ounce (oz) = 28.35 Grams (g)\n\n";}

//Function declarations for user-defined functions (with formal parameters).
double kilogramToPound(double pound, unsigned kgIn);
double poundToKilogram(double kilogram, unsigned lbIn);
double gramToOunce(double ounce, unsigned gIn);
double ounceToGram(double gram, unsigned ozIn);

int main(){
    double pound = 2.2046244202; // 1 kg = 2.2046244202 lbs
    double kilogram = 0.453592; // 1 lb = 0.453592 kg
    double ounce = 0.0352739907; // 1 g = 0.0352739907 oz
    double gram = 28.3495; // 1 oz = 28.3495 g
    unsigned kgIn, lbIn, gIn, ozIn;
    int conversion, ans=0;

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
            cout << "<< Weight Conversion App>>\n\n";
            cout << "[1] Kilogram to Pound" << endl;
            cout << "[2] Pound to Kilogram" << endl;
            cout << "[3] Gram to Ounce" << endl; 
            cout << "[4] Ounce to Grams" << endl;
            cout << "[0] Exit Conversion App" << endl;
            cout << "Select Conversion : ";
            cin >> conversion;

        switch(conversion){
            case 1:{
                cout << "\n<< Convert Kilogram to Pound >>\n";
                kg_lb(); //Show the conversion from kg to lb.
                //Prompt the user and give a Kilogram input.
                cout << "Enter a Kilogram: ";
                cin >> kgIn;
                cout << endl;
                kilogramToPound(pound, kgIn); //Show the conversion by calling the function.
                promptAndWait(); //Call the promptAndWait() function.
                break;
            }
            case 2:{
                cout << "\n<< Convert Pound to Kilogram >>\n";
                lb_kg(); //Show the conversion from lb to kg.
                //Promt the user and give a Pound input.
                cout << "Enter a Pound: ";
                cin >> lbIn;
                cout << endl;
                poundToKilogram(kilogram, lbIn); //Show the conversion by calling the function.
                promptAndWait();
                break;
            }
            case 3:{
                cout << "\n<< Convert Kilogram to Ounce >>\n";
                g_oz(); //Show the conversion from kg to oz.
                //Promt the user and give a Kilogram input.
                cout << "Enter a Gram: ";
                cin >> gIn;
                cout << endl;
                gramToOunce(ounce, gIn); //Show the conversion by calling the function.
                promptAndWait();
                break;
            }
            case 4:{
                cout << "\n<< Convert Ounce to Grams >>\n";
                oz_g(); //Show the conversion from oz to g.
                //Promt the user and give an Ounce input.
                cout << "Enter an Ounce: ";
                cin >> ozIn;
                cout << endl;
                ounceToGram(gram, ozIn); //Show the conversion by calling the function.
                promptAndWait();
                break;
            }
            case 0:{
                cout << "\nConversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:{
                cout << "Invalid Input!";
                promptAndWait();
            }
        }       
    } while(ans == 0);

    return 0;
}
//Function definition for promptAndWait() function.
void promptAndWait() { 
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
    return;
}
//Functions definition for kilogramToPound() function.
double kilogramToPound(double pound, unsigned kgIn){
    cout << "--> " << kgIn << " kg = " << (pound * kgIn) << " lb" << " <--\n";
    return (pound * kgIn);
}
//Functions definition for poundToKilogram() function.
double poundToKilogram(double kilogram, unsigned lbIn){
    cout << "--> " << lbIn << " lb = " << (kilogram * lbIn) << " kg" << " <--\n";
    return (kilogram * lbIn);
}
//Functions definition for gramToOunce() function.
double gramToOunce(double ounce, unsigned gIn){
    cout << "--> " << gIn << " g = " << (ounce * gIn) << " oz" << " <--\n";
    return (ounce * gIn);
}
//Functions definition for ounceToGram() function.
double ounceToGram(double gram, unsigned ozIn){
    cout << "--> " << ozIn << " oz = " << (gram * ozIn) << " g" << " <--\n";
    return (gram * ozIn);
}