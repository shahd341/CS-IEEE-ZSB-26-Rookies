#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string s1, s2;
int target = 0;
int truee= 0;
int total = 0;
int n;
void solve(int i,int Position)
{
    if (i== n)
    {
        total++;
        if (Position== target)
            truee++;
        return;
    }
    if (s2[i] =='+')
    {
        solve(i+ 1, Position+ 1);
    }
    else if (s2[i]== '-')
    {
        solve(i+ 1,Position -1);
    }
    else
    {
        solve(i+ 1,Position + 1);
        solve(i+ 1,Position - 1);
   }
}
int main()
{
    cin>> s1>>s2;
    n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '+')
            target++;
        else
            target--;
    }
    solve(0, 0);
    double slu= (double)truee/ total;
    cout << fixed << setprecision(12) <<slu;
    return 0;
}
