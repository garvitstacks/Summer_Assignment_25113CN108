#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[200];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int maxLen = 0;
    int start = 0;
    int maxStart = 0;

    for(int i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            int len = i - start;
            if(len > maxLen) {
                maxLen = len;
                maxStart = start; }
            start = i + 1; }
        if(str[i] == '\0')
            break; }

    cout << "Longest Word = ";
    for(int i = maxStart; i < maxStart + maxLen; i++) {
        cout << str[i]; }

    return 0;
}