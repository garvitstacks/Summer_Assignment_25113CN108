                       //Write a program to Find maximum frequency element(s).

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

    int maxFreq = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++; }}

        if(count > maxFreq) {
            maxFreq = count; }}

    cout << "Element(s) with maximum frequency: ";

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++; }}

        bool duplicate = false;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                duplicate = true;
                break; }}

        if(count == maxFreq && !duplicate) {
            cout << arr[i] << " "; }}

    cout << "\nMaximum Frequency = " << maxFreq;

    return 0;
}