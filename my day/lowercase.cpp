//to check hethe  charecter is in lower case or not
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character:\n";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "The character entered is in lowercase.\n";
    }
    else if (c >= 'A' && c <= 'Z') {
        cout << "The character entered is in uppercase.\n";
    }
    else {
        cout << "The entered character is not an alphabet.\n";
    }

    return 0;
}
