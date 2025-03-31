#include<iostream>
using namespace std;
class A{
    static int cnt;
    public:
    A(){
        cnt++;
        cout<<"object"<<cnt<<"created"<<endl;
    }
    ~A(){
     
        cout<<"object "<<cnt<<"destroyed"<<endl;
           cnt--;
    }
};
int A::cnt;
int main()
{A a1,a2,a3,a4;

    
    return 0;
}