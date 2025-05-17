#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Student{
    int roll;
    char name[20];
    public:
    void getdata(){
        cout<<"enter roll no.";
        cin>>roll;
        cout<<"enter name";
        cin.ignore();
        cin.getline(name,20);
    }
    void writedisk(){
        ofstream fout("c:/Manan/stud.txt",ios::app);
        fout<<roll<<"\t"<<name<<endl;
        fout.close();
    }
    void display(){
        cout<<roll<<"\t"<<name<<endl;
    }
    void readall(){
        ifstream fin("c:/Manan/stud.txt");
        if(!fin){
            cerr<<"file not found"<<endl;
            exit(1);
        }
        while(1){
            fin.getline(name,20);
            if(fin.eof())
            break;
            this->display();
        }
        fin.close();
    }
};
int main()
{
    Student s1;
    int n;
    cout<<"enter how many students";
    cin>>n;
    while(n){
        s1.getdata();
        s1.writedisk();
        n--;
    }
    s1.readall();
    return 0;
}