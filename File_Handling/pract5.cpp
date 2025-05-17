#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    ifstream fin("c:/Manan/a.txt");
    if(!fin){
        cerr<<"file not found";
        exit(1);
    }
    string s1;
    while(!fin.eof()){
        getline(fin,s1);
        cout<<s1<<endl;
    }
    fin.close();

    return 0;
}