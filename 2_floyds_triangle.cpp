#include<iostream>
using namespace std;
int main() {
    int count = 1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }
}


// Output
// 5

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
