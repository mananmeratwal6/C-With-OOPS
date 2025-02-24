#include <iostream>
using namespace std;
class A
{public:
    int x;
    float y;
    int *z;

public:
    A()
    {
        x = 1;
        y = 2.3;
        z = new int[3];
        z[0] = 3, z[1] = 5, z[2] = 2;
    }
  
    void display()
    {
        cout << x <<"\t"<< y<<"\t" << z[0]<<"\t" << z[1]<<"\t" << z[2]<<"\t" << endl;
    }
};
int main()
{
    A a1;
        A a2(a1);
    a1.display();
    a2.display();
a1.z[1]=2;
a1.display();
    a2.display();
    return 0;
}