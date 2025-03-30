#include<iostream>
using namespace std;
class T{
    int x;
    int y;
    public:
    void getdata(){
        cout<<"enter x and y";
        cin >>x>>y;
       
    }
   friend  void calcavg( T o1);

};
  void calcavg( T o1){
        int t;
 t=(o1.x+o1.y)/2;
        cout<<t;
    }
 

int main()
{T a1,a2;
a1.getdata();
calcavg(a1);
    
    return 0;
}