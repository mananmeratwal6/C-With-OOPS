#include<iostream>
#include<string.h>
using namespace std;
 class Strings{
    char str[100];
    public:
    Strings(){
     strcpy(str," ");
    }
    Strings(char str[]){
        strcpy(this->str,str);
    }
    Strings operator+(Strings obj){
        Strings t;
      strcpy(t.str,this->str);
      strcat(t.str,obj.str);
      return t;
      
    }
    void display(){
        cout<<str<<endl;
    }
 };
int main()
{
    Strings s1("kar"),s2("man"),s3;
    s3=s1+s2;
s3.display();
    
    return 0;
}