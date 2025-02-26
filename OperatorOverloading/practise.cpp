#include<iostream>
using namespace std;
class A{
    public:
    int operator()(char ch ,int a,int b){
        switch(ch){
            case '+':
           return a+b;
            
            case '-':
             return a-b;
         
            case '*':
             return a*b;
       
            case '/':
             return a/b;
            

        }
    }
};

int main()
{A a1;
cout<<a1('+',2,3);

    
    return 0;
}