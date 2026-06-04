//Write a program to Find product of digits.
                                    
#include<iostream>
using namespace std;

int main(){

    int n, rem, product = 1;

    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;

    while(n > 0){
        rem = n % 10;
        product = product * rem;
        n = n / 10;}

    cout<<"Product of digits of "<<temp<<" is: "<<product;

    return 0;
}