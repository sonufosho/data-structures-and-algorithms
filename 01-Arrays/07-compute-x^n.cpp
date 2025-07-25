#include <iostream>
using namespace std;

double solution(double base, int power) {
    // if (base < 0) {
    //      base = 1 / base;
    //      power = -power;
    // }
     
    double ans = 1;

    while (power > 0) {
        if (power % 2 == 1) {
            ans = ans * base;
        }

        base = base * base;
        power = power / 2;
    }

    return ans;
}

int main() {
    double base = 2.1;
    int power = 3;
    cout << solution(base, power);

    return 0;
}