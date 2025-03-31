#include<iostream>
using namespace std;
void inc(){
    static int n=0;
    n++;
    cout<<n<<endl;
}
int main()
{
    inc();
    inc();
    inc();
    return 0;
}