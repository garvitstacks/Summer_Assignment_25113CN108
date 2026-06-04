//WAP to count digits in a number

#include<iostream>
using namespace std;

int main (){

    int n, count=0;
    
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;
    
    while(n>0){
        n=n/10;
        count++; }
    
    cout<<"Number of digits in "<<temp<<" is: "<<count;

    return 0;
}    