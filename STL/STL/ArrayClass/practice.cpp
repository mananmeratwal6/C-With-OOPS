#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("manan is man "),s2;
   
       string str2("Hello, World!");
    string str3(str2);
    cout << "2. Copy constructor: '" << str3 << "'\n";

    // 3. Substring constructor: string(const string& str, size_t pos, size_t len)
    string str4(str2, 1, 8); // Extracts "World"
    cout << "3. Substring constructor: '" << str4 << "'\n";

    return 0;
}