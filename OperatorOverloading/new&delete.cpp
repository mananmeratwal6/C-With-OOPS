#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Student{
    char name[100];
    int age;
    Student(){
        cout<<"constructer is callled";
    }
    Student(char name[],int age){
        strcpy(this->name,name);
        this->age=age;
    }
    void display(){
cout<< "Name:" << name << endl;
cout<< "Age:" << age << endl;
}

    void *operator new(size_t n){
        void *p=::new Student();
        if(p==NULL){
            cout<<"memory is full";
        }
        else{
            cout<<"memory is created";

        }
        return p;
    }
    void operator delete(void * p2){
free(p2);
cout<< "memory free " << endl;
}

};
int main()
{Student *p=::new Student("fnrj",4);
    p->display();
    ::delete p;
    return 0;
}