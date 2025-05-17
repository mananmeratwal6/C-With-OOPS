#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<ctype.h>
using namespace std;

int main()
{
    ifstream fin("c:/Manan/a.txt");
    ofstream fout("c:/Manan/b.txt");
    if(!fin || !fout){
        cerr<<"file not found..";
        exit(1);
    }
    char ch;
    while(1){
        fin.get(ch);
        if(fin.eof()){
            break;
        }
        ch=toupper(ch);
        fout.put(ch);
    }
    fin.close();
    fout.close();
    return 0;
}