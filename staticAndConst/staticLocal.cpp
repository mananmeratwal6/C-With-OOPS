#include<iostream>
using namespace std;
void inc(){
    static int n;
    n++;
    cout<< n;
}
int main()
{
    inc();
    inc();
    inc();
    inc();
    inc();
    return 0;
}