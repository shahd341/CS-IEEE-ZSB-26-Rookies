#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a , b ; cin >>a>>b;
	string x=to_string(a);
	string y=to_string(b);
    for (int i = 1; i < a; i++) {
    	y+=char(b +'0');
   }
   for (int i = 1; i < b; i++) {
    	x+=char(a+'0');
   }
   if(x>=y)
   cout <<y;
   else
   cout <<x;

	return 0;
}
