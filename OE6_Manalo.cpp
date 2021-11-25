//Name: Leah G. Manalo
//Activity name: OE6
//Description: Array programming, apply searching and sorting in a dynamic array. Use functions in your solution.
//Date: Nov. 25, 2021

#include<iostream>
using namespace std;

const int _SIZE = 100;
void searchingArray();
void sortAscending();
void sortDescending();

int main(){
    int ch, x;
    int score[_SIZE];

    do{
        system("cls");
        cout <<"-- C++ Program that Search and Sort Array --\n"
             <<"[1] Searching Array\n"
             <<"[2] Sorting Array (Ascending)\n"
             <<"[3] Sorting Array (Descending)\n"
             <<"[0] Exit the Program\n";
        cout <<"Enter your choice: ";
        cin >> ch;
        cout << endl;

        switch(ch){
            case 1:{
                searchingArray();
                system("pause");
                break;
            }
            case 2:{
                sortAscending();
                system("pause");
                break;
            }
            case 3:{
                sortDescending();
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
} //end of main

//Function definitions
void searchingArray(){
    cout << "------------------------------------------" << endl;
    cout << "------------ Searching Array -------------" << endl;
    int i, target, size, score[_SIZE];
    cout << "\nEnter the size of array: ";
    cin >> size;

    //user input for array elements
    for(int x=0; x<size; x++){
        cout << "Enter the array element [" << x <<"]: ";
        cin >> score[x];
    }
    cout << endl;
    cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;
    //display the array elements
    for(int y=0; y<size; y++){
        cout << "Array elements [" << y << "]: " << score[y] << endl;
    }
    
    //user input for target element
    cout << "Enter the target element to find: ";
    cin >> target;

    //searching for TARGET element
    for(i=0; i<size; i++){
        if(score[i] == target){
            cout << "\nTarget Element Found! The Position is: " << (i) << endl;
            break;
        } 
    }
    if (score[i] != target){
            cout << "\nTarget Element is not in the Array!" << endl;
        }
    cout << endl;
    cout << "------------------------------------------" << endl;
    return;
}
void sortAscending(){
    cout << "-----------------------------------------" << endl;
    cout << "------- Sorting Array (Ascending) -------" << endl;
    int i, j, temp, size, score[_SIZE];
    cout << "\nEnter the size of array: ";
    cin >> size;

    //user input for array elements
    for(int x=0; x<size; x++){
        cout << "Enter the array element [" << x <<"]: ";
        cin >> score[x];
    }
    cout << endl;
    cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;

    //display unsorted array elements
    cout << "\nUnsorted array elements: " << endl;
    for(int y=0; y<size; y++){
        cout << score[y] << "\t";
    }
    //sorting array elements in ASCENDING order
    for(i=0; i<size; i++)
    for(j=i+1; j<size; j++){
        if(score[i] > score[j]){
            temp = score[i];
            score[i] = score[j];
            score[j] = temp;
        }
    }
    //print sorted array elements
	cout << "\nSorted array elements (Ascending Order): " << endl;
	for(int k=0; k<size; k++)
		cout << score[k] << "\t";
	cout << endl;
    cout << "-----------------------------------------" << endl;
    return;
}
void sortDescending(){
    cout << "------------------------------------------" << endl;
    cout << "------- Sorting Array (Descending) -------" << endl;
    int i, j, temp, size, score[_SIZE];
    cout << "\nEnter the size of array: ";
    cin >> size;

    //user input for array elements
    for(int x=0; x<size; x++){
        cout << "Enter the array element [" << x <<"]: ";
        cin >> score[x];
    }
    cout << endl;
    cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- " << endl;

    //display unsorted array elements
    cout << "\nUnsorted array elements: " << endl;
    for(int y=0; y<size; y++){
        cout << score[y] << "\t";
    }
    //sorting the array elements in DESCENDING order
    for(i=0; i<size; i++)
    for(j=i+1; j<size; j++){
        if(score[i] < score[j]){
            temp = score[i];
            score[i] = score[j];
            score[j] = temp;
        }
    }
    //print sorted array elements
	cout << "\nSorted array elements (Descending Order): " << endl;
	for(int k=0; k<size; k++)
		cout << score[k] << "\t";
	cout << endl;
    cout << "------------------------------------------" << endl;
    return;
}