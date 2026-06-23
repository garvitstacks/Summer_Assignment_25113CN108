                         //Write a program to Count even and odd elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    int even = 0, odd = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++; }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd;

    return 0;
}