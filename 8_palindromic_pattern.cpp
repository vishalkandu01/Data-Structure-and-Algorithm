#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n-i; j++) {
            cout << "  ";
        }
        for(int j = i; j >= 0; j--) {
            cout << j+1 << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}


// Output

// 5
//             1
//           2 1 2
//         3 2 1 2 3
//       4 3 2 1 2 3 4
//     5 4 3 2 1 2 3 4 5
