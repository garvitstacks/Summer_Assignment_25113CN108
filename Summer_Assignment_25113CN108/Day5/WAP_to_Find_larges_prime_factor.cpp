//Write a program to Find largest prime factor.

#include <iostream>
using namespace std;

int main(){

    int n, largestPrime = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            bool isPrime = true;

             for(int j = 2; j <= i / 2; j++){
                if(i % j == 0){
                    isPrime = false;
                    break; }}
            if(isPrime){
                largestPrime = i; }}}

    cout << "Largest Prime Factor of " << n
         << " is: " << largestPrime;

    return 0;
}
