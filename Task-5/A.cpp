#include <iostream>

using namespace std;

int main()
{
	int n , x ;
	cin >> n;
	while(n--){
		cin >> x ;
		int co =0;
		for(int i = 1; i * i <= x; i++){
			if(x%i==0){
			co++;
			 if (i != x / i)
                    co++;
		}
		}
	cout<<co<<endl;
	}
	return 0;
}

