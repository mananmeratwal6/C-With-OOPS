#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("abc");
        cout<<s1<<endl;
    s1.assign("matrix");
    cout<<s1<<endl;
    // s1.erase(2,3);
        cout<<s1<<endl;
        cout<<s1.empty()<<endl;
        // s1.clear();
            cout<<s1.empty()<<endl;
            cout<<s1.substr(1,3)<<endl;
            cout<<s1.substr(1)<<endl;

    return 0;
}