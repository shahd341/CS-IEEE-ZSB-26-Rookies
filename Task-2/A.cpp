#include <iostream>
using namespace std;
int main()
{
	int t ,n,co;
	string s;
	cin>>t;
	while(t--){
		co=0;
		cin>>n >> s;

	for(int i=0; i<s.size() ; i++){
		  int j;
    for( j=0; j<i;j++){

        if(s[i]==s[j]){
            co++;
            break;
    }
    }
    if(j==i)
    co+=2;
}

	cout<<co<<endl;


	}
	return 0;
}
