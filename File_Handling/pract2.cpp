#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream fout("c:/Manan/a.txt",ios::app);
    // fout<<" Computers";
    // fout.close();
    ofstream  fout;
    fout.open("c:/Manan/a.txt",ios::app);
    fout<<"Matrix";
    fout.close();
    return 0;
}