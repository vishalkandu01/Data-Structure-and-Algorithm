#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n-1; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}


// Output

// 5
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
