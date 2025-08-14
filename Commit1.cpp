#include <bitset>
#include <string>

using namespace std;

string decimalToBinary(int decimal) {
    return bitset<16>(decimal).to_string();  // 16-bit binary representation
}
