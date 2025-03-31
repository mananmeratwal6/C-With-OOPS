// #include<iostream>
// using namespace std;
// class Math{
//     public:
//     int sum(int x,int y){
//         return x+y;
//     }
//     int max(int x,int y){
//         return x>y?x:y;
//     }
// };
// int main()
// {Math m1;
//     cout<<m1.sum(1,2);
//      cout<<m1.max(1,2);
//     return 0;
// }


#include<iostream>
using namespace std;
class Math{
    public:
    static int sum(int x,int y){
        return x+y;
    }
   static int max(int x,int y){
        return x>y?x:y;
    }
};
int main()
{
    cout<<Math::sum(1,2);
     cout<<Math::max(1,2);
    return 0;
}