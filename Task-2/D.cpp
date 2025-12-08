#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t;
    int n ;
    while(t--){
    cin>> n;
    int arr[n];
    for(int i=0 ; i <n ;i++){
    cin >> arr[i];
    }
    for(int i=1 ; i <n ;i++){
    if (arr[0]!=arr[1]&&arr[1]==arr[2]){
    	cout<<1<<endl;
    	break;
    }
    else if(arr[i]!=arr[i-1]){
    cout<<i+1<<endl;
     break;
    }
    }
    }

	return 0;
}
