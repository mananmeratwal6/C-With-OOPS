#include<iostream>
using namespace std;
class A{
public:
int x;
static int y;
};
int A::y;
int main(){
A a1,a2;
cout<<sizeof(a1.y);
cout<<sizeof(a2.y);


return (0);
}
