// COMSC 210 | Lab 7 | Arkhip Finski
// IDE used: Visual Studio
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

string* reverseArray(string *arr);
void displayArray(string *arr);

int main(){
    string *listArr = nullptr;
    listArr = new string[SIZE]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};
    cout << "Original array: ";
    displayArray(listArr); 
    listArr = reverseArray(listArr);
    cout << "Reversed array: ";
    displayArray(listArr);
    delete [] listArr;

    return 0;
}

//This function receives a dynamic string array, reverses the elements, and returns a pointer to the modified array.
//arguments: a dynamic string array.
//return: a dynamic string array with all of its elements reversed.
string* reverseArray(string *arr){
    string temp;
    for(int i = 0; i < (SIZE/2); ++i){
        temp = *(arr + i);
        *(arr + i) = *(arr + (SIZE-1) - i);
        *(arr + (SIZE-1) - i) = temp;
    }

    return arr;
}

//This function receives a dynamic string array, and outputs its elements.
//arguments: a dynamic string array.
//return: no return, it's a void function. Just outputs all elements of the dynamic string array.
void displayArray(string *arr){
    for(int i = 0; i < SIZE; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
}