#include <iostream>
#include <algorithm>
#include <iterator>

using std::cout; using std::endl;
using std::string; using std::reverse;
using std::cin;

char *ReverseString(string &s) {
    reverse(s.begin(), s.end());
    return s.data();
}

int main() {
    string str; // = "This string must be reversed";
    cout << "Digite uma string: ";
    cin >> str;
    cout << ReverseString(str) << endl;

    return EXIT_SUCCESS;
}
