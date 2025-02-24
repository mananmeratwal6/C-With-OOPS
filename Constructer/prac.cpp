#include<iostream>
using namespace std;
class M{
    int r;
    int c;
    int **a;
    public:
   
    M(int r,int c){
           this ->r=r;
        this->c=c;
        a= new int *[r];
        {
            for(int i=0;i<r;i++){
                a[i]=new int [c];
            }
        }
     
    }
    void getdata(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<"<enter element "<<i+1<<j+1;
                cin>>a[i][j];
            }
        }
    }
    void display(){
 for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<"<element "<<a[i][j];
            }
 }
    }
    M operator+( M obj){
        M t(r,c);
        for(int i=0;i<r;i++){
            for(int j=0;i<c;j++){
                t.a[i][j]=this->a[i][j]+obj.a[i][j];
            }
        }
        return t;
    }
};
int main()
{M m1(2,2),m2(2,2),m3(2,2);
m1.getdata();
    m2.getdata();
  m3=m1+m2;
    m3.display();
    return 0;
}