//Write a program to Check strong number.

#include <iostream>
using namespace std;

int main(){

    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n > 0){
        digit = n % 10;
        int fact = 1;

      for(int i = 1; i <= digit; i++){
            fact *= i; }
        sum += fact;
        n /= 10; }

    if(sum == original){
        cout << original << " is a Strong Number.";}
    else{
        cout << original << " is not a Strong Number.";}

    return 0;
}