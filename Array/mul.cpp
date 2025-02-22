#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int **a1, **a2, **a3, r, c, r1, c1, r2, c2, r3, c3;

    cout << "enter how many row and  col array 1";
    cin >> r1 >> c1;
    a1 = new int *[r1];
    for (int i = 0; i < r1; i++)
    {
        a1[i] = new int[c1];
    }
    cout << "enter how many row and  col array2";
    cin >> r2 >> c2;
    a2 = new int *[r2];
    for (int i = 0; i < r2; i++)
    {
        a2[i] = new int[c2];
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "enter element of array one" << i + 1 << "," << j + 1;
            cin >> a1[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "enter element of array two" << i + 1 << "," << j + 1;
            cin >> a2[i][j];
        }
    }
    a3 = new int *[r1];
    for (int i = 0; i < r1; i++)
    {
        a3[i] = new int[c1];
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for(int k=0;k<c1;k++){

            
            a3[i][j] +=a1[i][k] * a2[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
       

            cout << a3[i][j] << "\t";
        }
        cout << endl;
    }
    for(int k=0;k<c2;k++){
    for (int i = 0; i < r1-1; i++)
    {
        for (int j = i+1; j < c2; j++)
        {
       if(a3[i][k]>a3[k][j])
        swap(a3[i][k],a3[k][j]);
       

            cout << a3[i][j] << "\t";
        }
        cout << endl;
    }
    }
    for (int i = 0; i < r1; i++)
        delete[] a1[i];
    delete[] a1;
    for (int i = 0; i < r2; i++)
        delete[] a2[i];
    delete[] a2;
    for (int i = 0; i < r1; i++)
        delete[] a3[i];
    delete[] a3;
    return 0;
}