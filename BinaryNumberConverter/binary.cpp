#include <iostream>
using namespace std;

void binaryConverter() {

    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;

        return;
    }
    cout << "Binary representation of " << num << " is: ";

    int binary[32] = { 0 };
        int index = 0;

        while (num > 0) {
            binary[index] = num % 2;
            num /= 2;
            index++;
        }

        for (int i = index - 1; i >= 0; i--) {
            cout << binary[i];
        }

        cout << endl;
    }


int main() {
    
    binaryConverter();

    return 0;
}
