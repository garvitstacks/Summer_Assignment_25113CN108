                        //Write a program to Find duplicates in array.

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

    cout << "Duplicate elements are: ";

    for(int i = 0; i < n; i++) {
        bool duplicate = false;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                duplicate = true;
                break; }}

        if(duplicate)
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; }} }

    return 0;
}