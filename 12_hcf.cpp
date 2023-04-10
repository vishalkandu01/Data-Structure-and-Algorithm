#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    gcd(b, a%b);
}

int main()
{
    // Method-1
    // int a, b;
    // cin >> a >> b;
    // int mini = min(a, b);
    // while(mini > 0) {
    //     if(a % mini == 0 && b % mini == 0) break;
    //     mini--;
    // }
    // cout << mini << endl;
    
    // Method-2
    // int a, b;
    // cin >> a >> b;
    // while(a != b) {
    //     if(a > b) a-b;
    //     else b-a;
    // }
    // cout << a << endl;
    
    // Method-3
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
