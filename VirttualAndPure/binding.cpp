#include<iostream>
using namespace std;
class Sim{
    public:
   virtual void calling(){
        cout<<"no sim"<<endl;
    }
    virtual void sms(){
        cout<<"no sms"<<endl;
    }
};
class Jio:public Sim{
      public:
  void calling(){
        cout<<"calling made from jio"<<endl;
    }
    void sms(){
        cout<<"smsm send from jio"<<endl;
    }
};
class Bsnl:public Sim{
      public:
  void calling(){
        cout<<"calling made from bsnl"<<endl;
    }
    void sms(){
        cout<<"smsm send from bsnl"<<endl;
    }
};
class Airtel:public Sim{
      public:
  void calling(){
        cout<<"calling made from airtel"<<endl;
    }
    void sms(){
        cout<<"smsm send from airtel"<<endl;
    }
};
int main()
{int ch;
cout<<"1.jio\n2.for bsnl\n3.for airtel\nenter your choice";
cin>>ch;
    Sim *p;
    if(ch==1)
    p=new Jio();
    else if(ch==2)
    p=new Bsnl();
    else if(ch==3)
    p=new Airtel();
    p->calling();
    p->sms();

    
    return 0;
}