                       //Write a program to Write function for palindrome.

#include <iostream>
using namespace std;

bool isPalindrome(int n){

    int original = n, reverse = 0;

    while(n > 0){
        reverse = reverse * 10 + n % 10;
        n /= 10; }

    return original == reverse; }

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isPalindrome(num)) {
        cout << num << " is a Palindrome Number"; }
    else {
        cout << num << " is not a Palindrome Number"; }

    return 0;
}