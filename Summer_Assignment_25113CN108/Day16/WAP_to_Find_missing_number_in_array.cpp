                        //Write a program to Find missing number in array.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter elements: ";
    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i]; }

    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;

    for(int i = 0; i < n - 1; i++) {
        arrSum += arr[i]; }

    cout << "Missing Number = " << totalSum - arrSum;

    return 0;
}