#include<iostream>

using namespace std;

class Array {
    int *a;
    int n;
public:
    Array() {
        a = NULL;
        n = 0;
    }
    
    Array(int n) {
        this->n = n;
        a = new int[n];
    }

    int& operator[](int i) {
        if (i < 0 || i >= n) {
            cerr << "Invalid index " << i << endl;
            exit(1); // terminate program on invalid access
        }
        return a[i];
    }

    ~Array() {
        delete[] a;
    }
};

int main() {
    int n;

    cout << "How many elements in the array: ";
    cin >> n;
    
    Array a1(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a1[i];
    }

    // Bubble sort logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a1[i] > a1[j]) {
                int t = a1[i];
                a1[i] = a1[j];
                a1[j] = t;
            }
        }
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a1[i] << endl;
    }

    // This line will trigger the invalid index error and terminate the program
    // a1[10] = 50;

    return 0;
}
