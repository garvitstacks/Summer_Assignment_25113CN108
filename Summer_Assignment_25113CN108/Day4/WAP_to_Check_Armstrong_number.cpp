//Write a program to Check Armstrong number.

#include <iostream>
using namespace std;

int main(){
    
    int n, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while(temp > 0){
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10; }

    if(sum == n){
        cout << n << " is an Armstrong Number"; }
    else{
        cout << n << " is not an Armstrong Number"; }

    return 0;
}