#include<iostream>
#include<string.h>
using namespace std;
class strings{
    char str[100];
    public:
    strings(){
        strcpy(str," ");
    }
    strings( char str[]){
        strcpy(this->str,str);
    }
    bool operator>(const strings obj ){

    if (strcmp(this->str,obj.str)>0)
   return true;
   return false;
    }
    bool operator<(const strings obj ){

    if (strcmp(this->str,obj.str)<0)
   return true;
   return false;
    }
    bool operator==(const strings obj ){

    if (strcmp(this->str,obj.str)==0)
   return true;
   return false;
    }

 
};
int main()
{
    strings s1("mar"),s2("mar"),s3;
if(s1>s2)
cout<<"s1 is grater";
  else if(s1<s2){
cout<<"s2 is gretaer";
  }
  else if(s1==s2){
    cout<<"eqiual";
  }

    return 0;
}