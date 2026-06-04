//Write a program to Find nth Fibonacci term

#include <iostream>
using namespace std;

int main(){

    int n, a = 0, b = 1, c, i;

    cout << "Enter the value of n: ";
    cin >> n;

    if(n == 1){
        cout << "Nth Fibonacci Term = " << a; }
    else if(n == 2){
        cout << "Nth Fibonacci Term = " << b; }
    else{
        for(i = 3; i <= n; i++){
            c = a + b;
            a = b;
            b = c; }

    cout << "Nth Fibonacci Term = " << b; }

    return 0;
}