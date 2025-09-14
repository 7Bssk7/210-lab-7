// COMSC 210 | Lab 7 | Arkhip Finski
// IDE used: Visual Studio
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

void reverseArray(string *arr);
void displayArray(string *arr);

int main(){
    string *listArr = nullptr;
    listArr = new string[SIZE]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};
    cout << "Original array: ";
    displayArray(listArr); 
    reverseArray(listArr);
    cout << "Reversed array: ";
    displayArray(listArr);
    delete [] listArr;

    return 0;
}

void reverseArray(string *arr){
    string temp;
    for(int i = 0; i < (SIZE/2); ++i){
        temp = *(arr + i);
        *(arr + i) = *(arr + (SIZE-1) - i);
        *(arr + (SIZE-1) - i) = temp;
    }
}

void displayArray(string *arr){
    for(int i = 0; i < SIZE; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
}