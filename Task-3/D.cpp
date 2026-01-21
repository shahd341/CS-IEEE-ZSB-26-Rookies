#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n , k;
	cin >> n >> k ;
	long long num;
	num =(log(n)/log(k))+1;
	cout << num ;

	return 0;
}
