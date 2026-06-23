                         //Write a program to Move zeroes to end.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; }

    int index = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++; }}

    while(index < n) {
        arr[index] = 0;
        index++; }

    cout << "Array after moving zeroes: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; }

    return 0;
}