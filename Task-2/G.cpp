#include <iostream>

using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--){
	    int n ;
	    cin >> n ;
	    string s , t;
	    cin >> s>> t;
	    int freqs[26]={0} , freqt[26]={0};
	    bool con= true ;
	    for(int i=0; i<n ;i++){
	    	 freqs[s[i]-'a']++;
	    	 freqt[t[i]-'a']++;
	    			}

	    for(int i=0; i<26 ;i++){
	    	if(freqs[i]!=freqt[i])
	    	con =false;
	    }
		if(con)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;

	}
	return 0;
}
