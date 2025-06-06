#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main()
{array<int,5>a1={1,2,3,4,5};
cout<<"the array element using get() is";
cout<<get<0>(a1)<<endl;
cout<<get<1>(a1)<<endl;
cout<<get<2>(a1)<<endl;
cout<<get<3>(a1)<<endl;
cout<<get<4>(a1)<<endl;

    
    return 0;
}