#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("matrix");
    cout<<s1.front()<<endl;
    cout<<s1.back()<<endl;
    cout<<s1.at(0)<<endl;
    cout<<s1[2]<<endl;
    cout<<s1[s1.size()-1]<<endl;
    for(char e:s1)
    cout<<e<<"\t";
    cout<<endl;
    for(auto itr=s1.begin();itr!=s1.end();itr++){
        // (*itr)++;
        cout<<*itr<<"\t";
        cout<<endl;
    }
    for(auto itr=s1.rbegin();itr!=s1.rend();itr++){
        // (*itr)++;
        cout<<*itr<<"\t";
        cout<<endl;
    }
    for(auto itr=s1.cbegin();itr!=s1.cend();itr++){
        // (*itr)++;erorr
        cout<<*itr<<"\t";
        cout<<endl;
    }
    for(auto itr=s1.crbegin();itr!=s1.crend();itr++){
        // (*itr)++;
        cout<<*itr<<"\t";
        cout<<endl;
    }
    return 0;
}