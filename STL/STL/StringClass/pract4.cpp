#include<iostream>
#include<string>
using namespace std;

int main()
{
 string s1("matrix");
 for(int i=0;i<s1.size();i++){
    cout<<s1.substr(0,i)<<endl;
 }
for(int i=s1.size();i>0;i--){
    cout<<s1.substr(0,i)<<endl;
 }
string s2("abc");
s1.swap(s2);
cout<<s1<<endl;
cout<<s2<<endl;
char s3[5];
s1.copy(s3,3,3);
s3[3]='\0';
cout<<s3<<endl;
    return 0;
}