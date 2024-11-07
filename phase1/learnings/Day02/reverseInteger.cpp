//to reverse the decimal/integer number
 
#include <iostream>
using namespace std;
 
int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a integer: ";
    cin >> num;
    originalNum = num;
 
    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        result = (result*10)+remainder;
        // removing last digit from the original number
        originalNum /= 10;
    }
 
 
    cout << result;
 
    return 0;
}
