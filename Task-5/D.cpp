#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    long long x;
    cin >> x;

    for (long long a = sqrt(x); a >= 1; a--)
    {
        if (x % a == 0)
        {
            long long b = x/ a;
            if (gcd(a, b) == 1)
            {
                cout << a << " " << b << endl;
                break;
            }
        }
    }
    return 0;
}
