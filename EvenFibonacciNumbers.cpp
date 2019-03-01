#include <iostream>
using namespace std;

int main() {
    int fibX = 2;
    int fibPrev = 1;
    int fibSum = 2;
    while (fibX < 4000000) {
        int temp = fibX;
        fibX = fibX + fibPrev;
        fibPrev = temp;
        if (fibX % 2 == 0) {
            fibSum = fibSum + fibX;
        }
    }
    cout << fibSum;
}