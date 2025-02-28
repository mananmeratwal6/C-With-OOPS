#include <iostream>
using namespace std;
inline void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    cout<<x<<y;
}
int main() {
swap(2,5);

    return 0;
}