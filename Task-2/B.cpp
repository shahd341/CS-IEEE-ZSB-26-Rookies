#include <iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	bool check1=true , check2 =true;
	for(int i=0; i<s.size();i++){
		if(!(s[i]>='A' && s[i]<='Z'))
		check1 =false;
	}
	for(int i=1; i<s.size();i++){
		if(!(s[i]>='A' && s[i]<='Z'))
		check2 =false;
	}
		for(int i=0; i<s.size();i++){
		if(check1 || check2){
		 if(s[i]>='A' && s[i]<='Z')
		 s[i]+=32;
		 else if(s[i]>='a' && s[i]<='z')
		 s[i]-=32;
		}

		}


	cout << s;
	return 0;
}
