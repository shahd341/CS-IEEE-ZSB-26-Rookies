#include <iostream>
using namespace std;
int fun(int n) {
    if (n % 2 != 0) return 0;

    int co= 0;
    for (int cows = 0; cows <= n / 4; cows++) {
        int chickens = (n - 4 * cows) / 2;
        if (chickens >= 0) co++;
    }
    return co;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fun(n) << endl;
    }
    return 0;
}
