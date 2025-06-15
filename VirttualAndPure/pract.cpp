#include<iostream>
using namespace std;
class student{
    protected:
string name;
int marks;
public:
void getdata1(){
    cout<<"marks";
    cin>>marks;
    cin.ignore();

    cout<<"enter name";
  getline(cin,name);
}
void display1(){
    cout<<"names is"<<name<<endl;
    cout<<"marks is"<<marks<<endl;
}
};
class internal :virtual public student{
    protected:
    int one;
    int two;
    public:
    void getdata2(){
        cout<<"enter one two";
        cin >>one >>two;
    }
    void display2(){
        cout<<"mark 1 and 2 is"<<one<<","<<two<<endl;
    }
};
class external: virtual public student{
    protected:
    int three;
    int four;
    public:
    void getdata3(){
        cout<<"enter three four";
        cin >>three >>four;
    }
    void display3(){
        cout<<"mark 3 and 4 is"<<three<<","<<four<<endl;
    }
};
class result:public internal,public external{
    int t;
    public:
  
    void total(void){
    

       display1();
       display2();
       display3();
       t=one+two+three+four;
cout<<t;

    }
};


int main()
{result r;
r.getdata1();
r.getdata2();
r.getdata3();
r.total();

    return 0;
}