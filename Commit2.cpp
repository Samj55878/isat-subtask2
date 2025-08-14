#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string binaryStr) {
    int decimal = 0;
    try {
        decimal = stoi(binaryStr, nullptr, 2);
    } catch (...) {
        cout << "Invalid binary input." << endl;
    }
    return decimal;
}
