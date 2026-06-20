                     //Write a program to Write function for Armstrong.

#include <iostream>
using namespace std;

bool isArmstrong(int n) {

    int original = n, sum = 0, digit;

    while(n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10; }

    return original == sum; }

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isArmstrong(num)) {
        cout << num << " is an Armstrong Number"; }
    else {
        cout << num << " is not an Armstrong Number"; }

    return 0;
}