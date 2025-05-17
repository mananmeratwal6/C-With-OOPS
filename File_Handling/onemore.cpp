#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class A{
    int roll;
    string name;
    public:
    void getdata(){
        cout<<"enter roll no."<<endl;
        cin>>roll;
        cout<<"enter name "<<endl;
        cin.ignore();
        getline(cin,name);
    }
    void write(){
        ofstream fout("c:/Manan/a.txt",ios::binary);
        fout.write((char*)this,sizeof(A));
        fout.close();
    }
    void display(){
        cout<<" roll no is"<<endl;
        cout<<roll;
        cout<<"name is"<<endl;
        cout<<name;
    }
    void read(){
        ifstream fin("c:/Manan/a.txt",ios::binary);
        if(!fin){
            cerr<<"file not found ";
        }
        string s1;
        fin>>this->roll;
        while(!fin.eof()){
          fin.read((char *)this,sizeof(A));
          getline(fin,name);
         this->display();
        }
        
        fin.close();
    }
};
int main()
{
    A a1;
    int n;
    cout<<"enter how many student";
    cin>>n;
    while(n){
a1.getdata();
a1.write();
n--;
    }
    a1.read();
    return 0;
}