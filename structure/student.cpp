#include<iostream>
using namespace std;
struct Student{
    int marks;
    string name;
    float per;
};
int main()
{
    Student *s;
    int n;
    cout<<"enter how many student";
    cin>>n;
    s=new Student [n];
    for (int  i = 0; i <n; i++)
    {
        cout<<"enter detail of student one"<<i+1;
        cin>>s[i].marks>>s[i].name>>s[i].per;
    }
     for (int i = 0; i < n; i++)
     {
       cout<<s[i].marks<<s[i].name<<s[i].per;
     }
     

    
    return 0;
}