#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student{
int roll;
char name[10];
char fname[10];
char mname[10];
char add[10];
public:
student(){
roll=0;
strcpy(name,"");
}
void getdata(){
cout<<"enter roll number: ";
cin>>roll;
cout<<"enter name: ";
cin>>name;
}
void writedisk(){
ofstream fout("c:\\matrix\\student.bin",ios::app|ios::binary);
if(!fout){
cerr<<"file opening error";
exit(1);
}
fout.write((char *)this,sizeof(*this));
fout.close();
}
int count(){
ifstream fin("c:\\matrix\\student.bin",ios::binary);
fin.seekg(0,ios::end);
int filesz=fin.tellg();
int n=filesz/sizeof(student);
return n;
}
void change(int rec_no){
fstream file("c:\\matrix\\student.bin",ios::in|ios::out|ios::binary);
if(!file){
cerr<<"file opening error";
exit(1);
}
int pos=((rec_no-1)*sizeof(student));
file.seekg(pos,ios::beg);
file.read((char *)this,sizeof(student));
cout<<"old record"<<endl<<roll<<"\t"<<name<<endl;
cout<<"Enter new name: ";
cin>>name;
file.seekp(pos,ios::beg);
file.write((char *)this,sizeof(student));
file.close();
}
void readall();
};
void student::readall(){
ifstream fin;
fin.open("c:\\matrix\\student.bin",ios::binary);
if(!fin){
cerr<<"file opening error";
exit(1);
}
while(1){
fin.read((char *)this,sizeof(student));
if(fin.eof()){
break;
}
cout<<roll<<"\t"<<name<<endl;
}
fin.close();
}
int main(){
student s1;
int n,i,no;
cout<<"enter how many students: ";
cin>>n;
for(i=1;i<=n;i++){
s1.getdata();
s1.writedisk();
}
s1.readall();
int recd_no;
recd_no=s1.count();
cout<<"Total Records="<<recd_no<<endl;
cout<<"Enter record number to change";
cin>>no;
s1.change(no);
s1.readall();
return 0;
} 