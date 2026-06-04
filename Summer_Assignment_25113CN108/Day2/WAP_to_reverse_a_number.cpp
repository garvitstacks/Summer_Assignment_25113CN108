//Write a program to Reverse a number.
                           
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

    cout<<"Reverse of "<<temp<<" is: "<<reverse;

    return 0;
}