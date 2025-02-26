#include<iostream>
#include<string.h>
using namespace std;
class A{
    char *x;
    public:
    A(){
       this-> x=new char[strlen(x)+1];
        strcpy(x,"");
    }
    A(char x[]){
      this-> x=new char[strlen(x)+1];
strcpy(this->x,"x");
    }
 A operator+(A y){
      A t;
       t.x = new char[strlen(x) + strlen(y.x) + 1];
      strcpy(t.x,x);
     strcat(t.x,y.x);
return t;
    }
    void display(){
        cout<<x;
    }
};
int main()
{A a1("mer"),a2("msn"),a3;
    a3=a1+a2;
    a3.display();
  

    return 0;
}