#include <iostream>

using namespace std;
void fun(int &h , int &a ,int &co){
	if(h>0)
	h-=a;
	co++;
}
int main()
{
	int h , a , co = 0;
	cin >> h >> a;
	while (h > 0)
	fun(h , a ,co);
	cout << co ;
	return 0;
}
