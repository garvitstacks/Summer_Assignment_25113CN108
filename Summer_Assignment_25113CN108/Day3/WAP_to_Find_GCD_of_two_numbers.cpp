//Write a program to Find GCD of two numbers 

#include <iostream>
using namespace std;

int main(){

    int a, b, i, gcd;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for(i = (a < b ? a : b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            gcd = i;
            break; }}

    cout << "GCD = " << gcd;

    return 0;
}