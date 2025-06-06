#include<iostream>
#include<vector>
using namespace std;

int main()
{vector<int>v1,v2,v3;

cout<<"vector data"<<endl;
for( int i=1;i<=10;i++){
    v1.push_back(i);
}
cout<<v1.capacity()<<endl;
for( int i=0;i<v1.size();i++){
    cout<<v1[i]<<"\t";
}
    cout<<endl;
    cout<<"vector2 data "<<endl;
    for( int j=11;j<=20;j++){
        v2.push_back(j);
    }
    cout<<v2.capacity()<<endl;
for(int  j=0;j<v2.size();j++){
    cout<<v2[j]<<"\t";
}
    cout<<endl;
cout<<"vector data 3"<<endl;
for( int i=1;i<=10;i++){
    v3.push_back(i);
}
cout<<v3.capacity()<<endl;
for( int i=0;i<v3.size();i++){
    cout<<v1[i]<<"\t";
}
    cout<<"\n\n";
    cout<<"operation: v1!=v2"<<endl;
    if(v1!=v2)
    cout<<"v1 and v2 is not equal"<<endl;
    else
    cout<<"v1 and v2 is equal"<<endl;
    cout<<"operation: v1==v3"<<endl;
    if(v1==v3)
    cout<<"v1 and v3 is equal"<<endl;
    else
    cout<<"v1 and v3 not equal"<<endl;

    return 0;
}