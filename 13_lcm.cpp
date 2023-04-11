#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int res = max(a, b);
    while(true) {
        if(res % a == 0 && res % b == 0) 
            return res;
        res++;
    }
    return res;
}

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    // cout << lcm(a, b) << endl;
    int lcm = (a*b) / gcd(a, b);
    cout << lcm << endl;
}


// Output

// 4 6
// 12
