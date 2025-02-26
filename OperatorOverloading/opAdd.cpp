// #include<iostream>
// using namespace std;
// class A{
//     int x;
//     public:
//     A():x(0){}
//     A(int x):x(x){}
//     A operator+(A obj){
//         A t;
//         t.x=this->x+obj.x;
//         return t;
//     }
//     void display(){
//         cout<<x;
//     }
// };
// int main()
// {
//     A a1(2),a2(4),a3;
//     a3=a1+a2;
//     a3.display();

//     return 0;
// }
#include<iostream>                                               
using namespace std;
class A{
    int x;
    public:
    A():x(0){}                                          
    A(int x):x(x){}
    int  operator+=(int y){
        
      this->x+=y;
      return this->x;
    }
    void display(){
        cout<<x;
    }
};
int main()
{
    A a1(2),a2,a3;
   
  int ans=a1+=7;
    // a3.display();
    a1.display();

cout<<ans;
    return 0;
}