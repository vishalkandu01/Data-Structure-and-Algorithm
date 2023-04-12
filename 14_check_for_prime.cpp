#include <iostream>
using namespace std;

bool isPrime1(int n) {
    if(n == 1) return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) 
            return false;
    }
    return true;
}

bool isPrime2(int n) {
    if(n == 1) return false;
    for(int i = 2; i*i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

bool isPrime3(int n) {
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i*i < n; i = i+6) {
        if( (n % i == 0) || (n % (i+2) == 0) )
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << isPrime1(n) << endl;
    cout << isPrime2(n) << endl;
    cout << isPrime3(n) << endl;

    return 0;
}


// Output

// 19
// 1
// 1
// 1
