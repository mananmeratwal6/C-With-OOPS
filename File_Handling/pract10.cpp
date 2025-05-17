#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    fstream file("c:/Manan/abc.txt",ios::out|ios::in);
    if(!file){
        cerr<<"file not found";
        exit(1);
    }
    file<<"Matrix";
    cout<<"position of get pointer is"<<file.tellg()<<endl;
    cout<<"position of put pointer is"<<file.tellp()<<endl;
    file.seekg(2,ios::beg);
    char ch;
    ch=file.get();
    cout<<"character is"<<ch<<endl;
    cout<<"position of get pointer is"<<file.tellg()<<endl;

    file.seekg(-1,ios::cur);
  
    ch=file.get();
    cout<<"character is"<<ch<<endl;
    cout<<"position of get pointer is"<<file.tellg()<<endl;

    file.seekg(-4,ios::end);
   
    ch=file.get();
    cout<<"character is"<<ch<<endl;
    cout<<"position of get pointer is"<<file.tellg()<<endl;
     cout<<"position of put pointer is"<<file.tellp()<<endl;

     file.seekp(0,ios::beg);
     file.put('m');
     cout<<"position of get pointer is"<<file.tellg()<<endl;
         return 0;
}