#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int fib = 0;
    while (fib < 1000) {
        if (fib % 3 == 0 || fib % 5 == 0) {
            i = i + fib;
        }
        fib++;
    }
    cout << i;
}