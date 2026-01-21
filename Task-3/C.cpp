#include <bits/stdc++.h>
using namespace std;

int main() {
cout << fixed << setprecision(2);

int x ;
float y ;
cin >> x >>y;

  if (x%5==0 && x+0.50<=y ){
   y-=(x+0.50);
   cout<<y;
  }
  else
  cout<<y;


	return 0;
}

