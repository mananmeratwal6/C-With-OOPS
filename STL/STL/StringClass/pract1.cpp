#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("mananan");
    cout<<s1.capacity()<<endl;
      cout<<s1.size()<<endl;
      for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<"\t";
      }
      cout<<endl;
      cout<<s1<<endl;
      s1.append("meratwal CEO");
      cout<<s1<<endl;
      cout<<s1.capacity()<<endl;
      cout<<s1.size()<<endl;
            s1.insert(4,"Q");
      cout<<s1<<endl;
      cout<<s1.capacity()<<endl;
      cout<<s1.size()<<endl;
      s1.insert(4,7,'*');;
      cout<<s1<<endl;
      cout<<s1.capacity()<<endl;
      cout<<s1.size()<<endl;
      s1.push_back('-');
      cout<<s1<<endl;
      cout<<s1.capacity()<<endl;
      cout<<s1.size()<<endl;
      s1.pop_back();
      cout<<s1<<endl;
      cout<<s1.capacity()<<endl;
      cout<<s1.size()<<endl;

    return 0;
}