#include <iostream>
using namespace std;

int main() {

    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;

    while(str[length] != '\0') {
        length++; }

    for(int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp; }

    cout << "Reversed String = " << str;

    return 0;
}