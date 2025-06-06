#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int ,5>a1={10,20,30,40,50};
    for(array<int ,5>::iterator itr=a1.begin();itr!=a1.end();itr++){
        (*itr)++;
        cout<<*itr<<"\t";
    }
    cout<<endl;


    for(array<int ,5>::const_iterator itr=a1.cbegin();itr!=a1.cend();itr++){
        
        cout<<*itr<<"\t";
    }
    cout<<endl;

    for(array<int ,5>::reverse_iterator itr=a1.rbegin();itr!=a1.rend();itr++){
        (*itr)++;
        cout<<*itr<<"\t";
    }
    cout<<endl;

    for(array<int ,5>::const_reverse_iterator itr=a1.crbegin();itr!=a1.crend();itr++){
     
        cout<<*itr<<"\t";
    }
    cout<<endl;


for(auto itr=a1.begin();itr!=a1.end();itr++){
(*itr)++;
cout<<*itr<<"\t";
}
cout<<endl;
for(auto itr=a1.cbegin();itr!=a1.cend();itr++){

cout<<*itr<<"\t";
}
cout<<endl;



for(auto itr=a1.crbegin();itr!=a1.crend();itr++){

cout<<*itr<<"\t";
}
cout<<endl;
    
    return 0;
}