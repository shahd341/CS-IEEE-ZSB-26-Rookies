#include <iostream>
#include <cmath>
using namespace std;

int n;
long long a[20];
long long result = 1e18;

void fun(int i, long long sum1, long long sum2)
{
    if (i == n)
    {
        result= min(result,llabs(sum1 - sum2));
        return;
    }
    fun(i +1, sum1 + a[i],sum2);
    fun(i+ 1,sum1, sum2 + a[i]);
}

int main()
{
    cin>> n;
    for (int i =0; i<n; i++)
        cin>>a[i];
    fun(0, 0, 0);
    cout <<result<< endl;
    return 0;
}
