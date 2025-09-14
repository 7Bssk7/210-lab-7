// COMSC 210 | Lab 7 | Arkhip Finski
// IDE used: Visual Studio
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

string* reverseArray();
void displayArray(string *arr);

int main(){
    string *listArr = nullptr;
    listArr = new string[SIZE]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};
    cout << "Original array: ";
    displayArray(listArr); 

    return 0;
}

void displayArray(string *arr){
    for(int i = 0; i < SIZE; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
}