//Name: Leah G. Manalo
//Activity name: PT4 - Free programming research problem. 
/*Description: Create a program in C++ such that you need to implement the following concepts in your program; 
conditionals, looping statements, functions (void and with parameters), file stream, array. Also, specify and conceptualize 
the title or niche of your program (i.e. grading system, game program, string manipulation, array manipulation etc.)*/
//Date: December 8, 2021

#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>

using namespace std;

void minimumSale();
void maximumSale();
void totalSale(int numberOfDays);

int main(){
    char ch;
    char pin[10] = "1234";
    char inputPin[10];
    
    do{
        system("cls");
        cout << "Enter 4-digit pin: ";
        cin >> inputPin;

        if (!(strcmp(inputPin,pin))) {
            cout << "\nCorrect pin...Access granted!" << endl;
            int ch;

            do{
                system("cls");
                cout <<"-- MONTHLY SALES TRACKING APP --\n"
                    <<"[1] Minimum Sale\n"
                    <<"[2] Maximum Sale\n"
                    <<"[3] Total Sale\n"
                    <<"[0] Exit the Program\n";
                cout <<"Enter your choice: ";
                cin >> ch;
                cout << endl;

                switch(ch){
                    case 1:{
                        minimumSale();
                        system("pause");
                        break;
                    }
                    case 2:{
                        maximumSale();
                        system("pause");
                        break;
                    }
                    case 3:{
                        cout << "------------------------------------------" << endl;
                        cout << "--------------- TOTAL SALE ---------------" << endl;
                        int days;
                        cout << "Enter number of days: ";
                        cin >> days;
                        totalSale(days);
                        system("pause");
                        break;
                    }
                    case 0:{
                        cout <<"Thank you for using the app!\n";
                        system("pause");
                        return 0;
                    }
                    default:{
                        cout <<"Invalid input...Please try again!\n";
                        system("pause");
                    }
                }
            }while(true);
            return 0;
        }else{
                cout << "\nIncorrect pin...Access denied!\n";
                cout << "Press [Y] to try again or [N] to exit: ";
                cin >> ch;
        }
    }while (ch == 'Y' || ch == 'y');

    return 0;
} //end of main function

//Function definitions
void minimumSale(){
    cout << "-----------------------------------------" << endl;
    cout << "------------- MINIMUM SALE --------------" << endl;
    ifstream inData; 
    string month;
    ofstream outData;
    cout << "\nEnter the file name with\n"
         << "specified sales of month: ";
    cin >> month;
    inData.open(month);
    outData.open("month_sales.txt", ios::app);
        //check if the file opened correctly
        if(inData.fail()){
            cout << "\nError in opening file " << month << ". Exiting the program...";
            exit(1);
        }
        if(outData.fail()){
            cout << "\nError in opening output file. Exiting the program...";
            exit(1);
        }
    int daily_sales[31];
    int salesRead = 0, currentSale;
    while ((salesRead < 31) && (inData >> currentSale)){
        daily_sales[salesRead] = currentSale;
        salesRead++;
    }

    int minSale, minDaySale;
    for(int i=0;i<31;i++){
        if(i==0){
            minSale = daily_sales[i];
            minDaySale = 1;
        }else if (daily_sales[i] < minSale) {
            minSale = daily_sales[i];
            minDaySale = i+1;
        }
    }

    cout << "\nIn the file " << month 
         << ", \nthe lowest sale was in day " << minDaySale
         << "\nwith a sale of PHP " << minSale << ".\n";
    outData << "\nIn the file " << month 
         << ", \nthe lowest sale was in day " << minDaySale
         << "\nwith a sale of PHP " << minSale << ".\n";
    cout << "------------------------------------------" << endl;

    inData.close();
    outData.close();
    return;
}

void maximumSale(){
    cout << "-----------------------------------------" << endl;
    cout << "------------- MAXIMUM SALE --------------" << endl;
    ifstream inData; 
    string month;
    ofstream outData;
    cout << "\nEnter the file name with\n"
         << "specified sales of month: ";
    cin >> month;
    inData.open(month);
    outData.open("month_sales.txt", ios::app);
        //check if the file opened correctly
        if(inData.fail()){
            cout << "\nError in opening file " << month << ". Exiting the program...";
            exit(1);
        }
        if(outData.fail()){
            cout << "\nError in opening output file. Exiting the program...";
            exit(1);
        }
    int daily_sales[31];
    int salesRead = 0, currentSale;
    while ((salesRead < 31) && (inData >> currentSale)){
        daily_sales[salesRead] = currentSale;
        salesRead++;
    }

    int maxSale, maxDaySale;
    for(int i=0;i<31;i++){
        if(i==0){
            maxSale = daily_sales[i];
            maxDaySale = 1;
        }else if (daily_sales[i] > maxSale) {
            maxSale = daily_sales[i];
            maxDaySale = i+1;
        }
    }

    cout << "\nIn the file " << month 
         << ", \nthe highest sale was in day " << maxDaySale
         << "\nwith a sale of PHP " << maxSale << ".\n";
    outData << "\nIn the file " << month 
         << ", \nthe highest sale was in day " << maxDaySale
         << "\nwith a sale of PHP " << maxSale << ".\n";

    cout << "------------------------------------------" << endl;

    inData.close();
    outData.close();
    return;
}

void totalSale(int numberOfDays){
    ifstream inData; 
    string month;
    ofstream outData;
    cout << "\nEnter the file name with\n"
         << "specified sales of month: ";
    cin >> month;
    inData.open(month);
    outData.open("month_sales.txt", ios::app);
        //check if the file opened correctly
        if(inData.fail()){
            cout << "\nError in opening file " << month << ". Exiting the program...";
            exit(1);
        }
        if(outData.fail()){
            cout << "\nError in opening output file. Exiting the program...";
            exit(1);
        }
    int daily_sales[31];
    int salesRead = 0, currentSale;
    while ((salesRead < 31) && (inData >> currentSale)){
        daily_sales[salesRead] = currentSale;
        salesRead++;
    }

    double sum = 0;
    int i;
    for(i=0; i<31; i++){
        sum = sum + daily_sales[i];
    }

    cout << "\nIn the file " << month 
         << ", \nthe total sale was PHP " << sum
         << "\nwith an average of PHP " << sum/numberOfDays
         << "\nsales per day." << endl;
    outData << "\nIn the file " << month 
         << ", \nthe total sale was PHP " << sum
         << "\nwith an average of PHP " << sum/numberOfDays
         << "\nsales per day." << endl;

    cout << "------------------------------------------" << endl;

    inData.close();
    outData.close();
    return;
}