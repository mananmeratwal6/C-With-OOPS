#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    ifstream fin("c:/Manan/a.txt");
    if(!fin){
        cerr<<"File not found..";
        exit(1);
    }
    string s1;
    getline(fin,s1);
    cout<<s1;
    fin.close();    
    return 0;
}