#include <iostream>

using namespace std;

int main()
{
    int n , co=0;
    cin >> n ;
    for(int j =0 ; j<n; j++){
    	int x[3];
    	 for(int i =0 ; i<3; i++){
       	cin>> x[i];
    	 }
       	if((x[0]+x[1]+x[2])>=2)
       	 co++;
    }
   cout<<co;
	return 0;

}
