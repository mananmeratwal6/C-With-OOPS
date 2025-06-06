#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 1. Default constructor: string()
    string str1;
    cout << "1. Default constructor (empty string): '" << str1 << "'\n";

    // 2. Copy constructor: string(const string& str)
    string str2("Hello, World!");
    string str3(str2);
    cout << "2. Copy constructor: '" << str3 << "'\n";

    // 3. Substring constructor: string(const string& str, size_t pos, size_t len)
    string str4(str2, 1, 5); // Extracts "World"
    cout << "3. Substring constructor: '" << str4 << "'\n";

    // 4. C-string constructor: string(const char* s)
    const char* cstr = "C-string example";
    string str5(cstr);
    cout << "4. C-string constructor: '" << str5 << "'\n";

    // 5. C-string with length constructor: string(const char* s, size_t n)
    const char* partialStr = "Partial example";
    string str6(partialStr, 14); // Extracts "Partial"
    cout << "5. C-string with length constructor: '" << str6 << "'\n";

    // 6. Fill constructor: string(size_t n, char c)
    string str7(10, '*'); // Creates a string "**********"
    cout << "6. Fill constructor: '" << str7 << "'\n";

    // 7. Range constructor: template <class InputIterator> string (InputIterator first, InputIterator last)
    vector<char> charVec = {'H', 'e', 'l', 'l', 'o'};
    string str8(charVec.begin(), charVec.end()); // Constructs "Hello"
    cout << "7. Range constructor: '" << str8 << "'\n";

    // Input a string using getline
    string userInput;
    cout << "\nEnter a line of text: ";
    getline(cin, userInput);
    cout << "You entered: '" << userInput << "'\n";

    return 0;
}
