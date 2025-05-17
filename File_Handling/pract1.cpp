#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream fout("c:/Manan/a.out");
    // fout<<"Matrix";
    // fout.close();
    ofstream fout;
    fout.open("c:/Manan/a.out");
    fout<<"Matixx";
    fout.close();
    return 0;
}