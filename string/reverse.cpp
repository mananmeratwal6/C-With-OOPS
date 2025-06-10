#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    char s1[10];
    cout<<"enter a name ";
    cin.getline(s1,10);
    cout<<"your name is"<<s1;
    for(int i=0;i<strlen(s1)-1;i++){
        for(int j=strlen(s1)-1;j>0;j--){
            if(i<j)
            swap(s1[i],s1[j]);
        }
        cout<<endl;
    }
    cout<<"your name is"<<s1;
    return 0;
}