#include<iostream>
using namespace std;

class myClass {
public:
    void fun1(int n) {  // Naive Method
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }

        int res = 0;
        while(fact % 10 == 0) {
            res++;
            fact = fact / 10;
        }

        cout << res << endl;
    }

    void fun2(int n) {  // Optimised method
        int res = 0;

        for(int i = 5; i <= n; i = i*5) {
            res = res + int(n/i);
        }

        cout << res << endl;
    }
};

int main() {
    // int n;
    // cin >> n;
    
    myClass obj;

    obj.fun1(5);
    obj.fun2(100);
}
