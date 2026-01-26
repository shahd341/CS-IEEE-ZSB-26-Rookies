#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string s;
bool a[10];
vector<string> ans;
void fun(string cur)
{
    if (cur.size()== s.size())
    {
        ans.push_back(cur);
        return;
    }
    for(int i = 0; i <s.size(); i++)
    {
        if (a[i]) continue;
        if (i > 0 && s[i]== s[i - 1] &&!a[i - 1])
            continue;

        a[i] = true;
        fun(cur +s[i]);
        a[i] = false;
    }
}
int main()
{
    cin >> s;
    sort(s.begin(), s.end());
    fun("");
    cout<< ans.size()<< endl;
    for(string x : ans){
        cout << x << endl;
    }
    return 0;
}
