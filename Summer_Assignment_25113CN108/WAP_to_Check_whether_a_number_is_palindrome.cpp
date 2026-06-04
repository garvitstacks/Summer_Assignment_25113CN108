//Write a program to Check whether a number is palindrome.
                        
#include<iostream>
using namespace std;

int main(){

    int n, rem, reverse = 0;

    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;

    while(n > 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;}

    if(temp == reverse){
        cout<<temp<<" is a palindrome number";}
    else{
        cout<<temp<<" is not a palindrome number";}

    return 0;
}