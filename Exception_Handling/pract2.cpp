#include<iostream>
using namespace std;
void level1();
void level2();
void level3();
void level4();
void level4(){
    throw runtime_error("error occured in level 1");
}
void level3(){
    level4();
}
void level2(){
    level3();
}
void level1(){
    level2();
}
int main()
{
    try{
        level1();
    }
    catch( const char *p){
        cout<<p;
    }
    return 0;
}