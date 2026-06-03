//Find sum of digits of a number

#include<iostream>
using namespace std;

int main(){

    int n, rem, sum = 0;

    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;

    while(n > 0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;}

    cout<<"Sum of digits of "<<temp<<" is: "<<sum<<endl;

    return 0;
}
