#include<iostream>
using namespace std;
class Arithmatic{
  
    public:
    int operator()(char ch,int a,int b){
        switch (ch)
        {
        case '+':
          return a+b;
        
        default:
            break;
        }
    }
};
int main()
{
    Arithmatic arith;
   int ans= arith('+',1,4);
   cout<<ans;
    return 0;
}