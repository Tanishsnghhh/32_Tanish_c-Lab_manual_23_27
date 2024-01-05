//Write a program to create an array of strings and display them in alphabetical order
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int size = 4;
    string arr[size];
    cout << "Enter " << size << " strings:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    cout << "Strings in alphabetical order:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << endl;
    }

    return 0;
}