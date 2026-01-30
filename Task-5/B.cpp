#include <iostream>
using namespace std;

bool factor(long long n, long long &a, long long &b, long long &c) {

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a =i;
            n/= i;
            break;
        }
    }
        if (a == 0) {
        return false;
        }
    for (long long i = a + 1; i * i <= n; i++) {
        if (n % i == 0) {
            b = i;
            n /= i;
            break;
        }
    }

    if (b == 0) {
    	return false;
    }
    c = n;

    if (c >= 2 && a != b && b != c && a != c){
        return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a = 0, b = 0, c = 0;
        cin >> n;
        if (factor(n, a, b, c)) {
            cout << "YES"<<endl;
            cout << a << " " << b << " " << c << endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
