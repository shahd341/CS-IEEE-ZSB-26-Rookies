#include <iostream>

using namespace std;
int main()
{
	int n , k;
	cin >> n >> k ;
	int si = 2*n+1;
	int arr[si];
	for(int i =1 ; i <= si ; i++){
	  cin >> arr[i];
	}
	for(int i =2 ; i < si ; i++){
      if (k>0 && arr[i]-1>arr[i-1] && arr[i]-1>arr[i+1]){
       arr[i]-- ;
       k--;
	}
	}
	for(int i =1 ; i <= si ; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
